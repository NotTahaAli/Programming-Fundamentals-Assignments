double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 == 0) return 0; // Divide by 0
    return num1 / num2;
}

int modulo(int num1, int num2) {
    if (num2 == 0) return 0; // Divide by 0
    return num1 % num2;
}

double power(double A, int n) {
    double val = 1;
    if (n < 0) {
        n *= -1;
        A = 1/A;
    }
    for (int i = 0; i < n; i++) {
        val *= A;
    }
    return val;
}

double root(double A, int n) {
    double prevGuess = 1;
    double guess = 2;
    while ((int) (guess*10000) != (int) (prevGuess*10000)) {
        prevGuess = guess;
        guess *= (double) (n-1)/n;
        guess += A/n * 1/power(prevGuess, n-1);
    }
    return guess;
}

void floatToFrac(double A, int &num, int &denum) {
    int whole = A;
    if (A < 0) whole--;
    A -= whole;
    int lowerNum = 0, upperNum = 1;
    int lowerDenum = 1, upperDenum = 1;
    num = lowerNum+upperNum;
    denum = lowerDenum+upperDenum;
    while ( (int) (denum*A*1000) != num * 1000 ) {
        if (denum*A < num) {
            upperNum = num;
            upperDenum = denum;
        } else {
            lowerNum = num;
            lowerDenum = denum;
        }
        num = lowerNum+upperNum;
        denum = lowerDenum+upperDenum;
    }
    num += denum*whole;
}


bool power(double A, double n, double &answer) {
    int powerK = n, rootK = 1;
    int mult = 1;
    if (A == 0 && n <= 0) return false; // Answer Undefined
    if (int(n*10000) != int(n)*10000) floatToFrac(n, powerK, rootK);
    if (A < 0) {
        if (rootK % 2 == 0) return false; // Answer Undefined
        if (powerK % 2 != 0) mult = -1;
        A *= -1;
    };
    answer = mult*power(root(A,rootK), powerK);
    return true;
}