#include <iostream>

using namespace std;

int main()
{
    double x = 0, x2 = 0, x4 = 0;
    double newSin = 0;
    int power = 1;
    char prevSin[11] = "", newSin3SF[11] = "";
    double M_PI = 3.14159265358979323846;

    cout << "Input X (in degrees): ";
    cin >> x;

    x = x - 360 * (int)(x / 360);

    int answerMultiplier = (x > 180) ? -1 : 1;

    x = (x >= 180) ? x - 180 : x;

    x = x * (M_PI / 180);
    x2 = x * x;
    x4 = x2 * x2;

    unsigned long long fact = 1;
    long double xPower = x;
    bool iterationsSame = false;
    do
    {
        fact *= (power + 1) * (power + 2);
        sprintf(prevSin, newSin3SF);
        // Using the Logic (x^n)/n! - (x^(n+2))/(n+2)! = (x^n)*((n+2)*(n+1) - x^2) / (n+2)!
        newSin += (xPower / fact) * ((power + 1) * (power + 2) - x2);
        fact *= (power + 3) * (power + 4);
        xPower *= x4;
        power += 4;
        sprintf(newSin3SF, "%.2e", newSin);
        iterationsSame = true;
        for (int i = 0; i < 11; i++)
        {
            if (newSin3SF[i] != prevSin[i])
            {
                iterationsSame = false;
                break;
            }
        }
        // cout << newSin << " " << prevSin << " " << newSin3SF << endl;
    } while (!iterationsSame);

    printf("sin(x) = %.3g", answerMultiplier * newSin);

    return 0;
}