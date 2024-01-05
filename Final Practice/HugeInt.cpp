#include <iostream>
using namespace std;

void getHugeInt(int HugeInt[], int &size) {
    while (true) {
        cout << "Enter the size of HugeInt: ";
        cin >> size;
        cin.ignore(1000, '\n');
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please try again." << endl;
        } else if (size < 1 || size > 20) {
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
    for (int i = 0; i < size; i++) {
        while (true) {
            cout << "\tEnter digit #" << i + 1 << " of Number: ";
            cin >> HugeInt[i];
            cin.ignore(1000, '\n');
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Please try again." << endl;
            } else if (HugeInt[i] < 0 || HugeInt[i] > 9) {
                cout << "Invalid input. Please try again." << endl;
            } else {
                break;
            }
        }
    }
}

void printHugeInt(int HugeInt[], int size) {
    int leading = true;
    for (int i = 0; i < size; i++) {
        if (HugeInt[i] != 0) {
            leading = false;
        }
        if (!leading) {
            cout << HugeInt[i];
        }
    }
    if (leading) cout << 0;
    cout << endl << endl;
}

void multiply(int HugeInt1[], int HugeInt2[], int result[], int s1, int s2) {
    int resultSize = s1+s2;
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            result[i+j+1] += HugeInt1[i] * HugeInt2[j];
        }
    }
    for (int i = resultSize-1; i > 0; i--) {
        result[i-1] += result[i] / 10;
        result[i] %= 10;
    }
}

bool isHugeInt1GreaterOrEqual(int HugeInt1[], int HugeInt2[], int s1, int s2) {
    int effectiveS1 = s1;
    int effectiveS2 = s2;
    for (int i = 0; HugeInt1[i] == 0 && effectiveS1 > 0; i++, effectiveS1--);
    for (int i = 0; HugeInt2[i] == 0 && effectiveS2 > 0; i++, effectiveS2--);
    cout << effectiveS1 << " " << effectiveS2;
    if (effectiveS2 > effectiveS1) return false;
    if (effectiveS1 > effectiveS2) return true;
    for (int i = 0; i < effectiveS1; i++) {
        if (HugeInt1[i + (s1-effectiveS1)] > HugeInt2[i + (s2-effectiveS2)]) return true;
        if (HugeInt1[i + (s1-effectiveS1)] < HugeInt2[i + (s2-effectiveS2)]) return false;
    }
    return true;
}

void subtract(int HugeInt1[], int HugeInt2[], int result[], int s1, int s2) {
    if (!isHugeInt1GreaterOrEqual(HugeInt1, HugeInt2, s1, s2)) {
        cout << "Error: HugeInt2 is larger than HugeInt1." << endl;
        for (int i = 0; i < s1; i++) {
            result[i] = 0;
        }
        return;
    }
    int diff = s2 - s1;
    bool borrow = false;
    for (int i = s1-1; i >= 0; i--) {
        result[i] = HugeInt1[i];
        if (borrow) {
            result[i]--;
            borrow = false;
        }
        if (i+diff >= 0) {
            result[i] -= HugeInt2[i+diff];
        }
        if (result[i] < 0) {
            result[i] += 10;
            borrow = true;
        }
    }
}


int main() {
    int HugeInt1[20], HugeInt2[20], Result[40] = {0};
    int size1 = 0, size2 = 0, resultSize = 0;
    getHugeInt(HugeInt1, size1);
    cout << "The HugeInt you entered is: ";
    printHugeInt(HugeInt1, size1);
    getHugeInt(HugeInt2, size2);
    cout << "The HugeInt you entered is: ";
    printHugeInt(HugeInt2, size2);
    multiply(HugeInt1, HugeInt2, Result, size1, size2);
    cout << "Multiply Result is: ";
    printHugeInt(Result, size1+size2);
    subtract(HugeInt1, HugeInt2, Result, size1, size2);
    cout << "Subtract Result is: ";
    printHugeInt(Result, size1);
    return 0;
}