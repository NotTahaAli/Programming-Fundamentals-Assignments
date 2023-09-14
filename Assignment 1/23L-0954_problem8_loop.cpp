#include <iostream>

using namespace std;

int main()
{
    double x = 0, x2 = 0, x4 = 0;
    double newSin = 0, prevSin = 0, newSin3SF = 0;
    unsigned int power = 1;
    unsigned long long fact = 1;
    float multiplicationFactor = 1;
    int answerMultiplier = 1;
    long double xPower = 0;
    
    double M_PI = 3.14159265358979323846;

    cout << "Input X (in degrees): ";
    cin >> x;

    x = x - 360 * (int)(x / 360);

    answerMultiplier = (x > 180) ? -1 : 1;

    x = (x >= 180) ? x - 180 : x;

    x = x * (M_PI / 180);
    x2 = x * x;
    x4 = x2 * x2;

    xPower = x;
    do
    {
        fact *= (power + 1) * (power + 2);
        prevSin = newSin3SF;
        // Using the Logic (x^n)/n! - (x^(n+2))/(n+2)! = (x^n)*((n+2)*(n+1) - x^2) / (n+2)!
        newSin += (xPower / fact) * ((power + 1) * (power + 2) - x2);
        fact *= (power + 3) * (power + 4);
        xPower *= x4;
        power += 4;
        newSin3SF = newSin;
        multiplicationFactor = 1;
        if (newSin3SF < 0)
            newSin3SF *= -1;
        while ((newSin3SF < 1 && newSin3SF != 0) || newSin3SF >= 10)
        {
            if (newSin3SF < 1)
            {
                newSin3SF *= 10;
                multiplicationFactor *= 10;
            }
            else
            {
                newSin3SF /= 10;
                multiplicationFactor /= 10;
            }
        }
        newSin3SF = ((int)((newSin3SF*100)+0.5)) / 100.0 / multiplicationFactor;
    } while (newSin3SF != prevSin);
    cout << "sin(x) = " << answerMultiplier * newSin3SF << endl;

    return 0;
}