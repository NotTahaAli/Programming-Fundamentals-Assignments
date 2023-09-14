#include <iostream>
using namespace std;

int main()
{
    double x = 0, x2 = 0, x4 = 0;
    double sin = 0;
    int answerMultiplier = 1;

    double M_PI = 3.14159265358979323846;

    cout << "Input X (in degrees): ";
    cin >> x;

    x = x - 360 * (int)(x / 360);

    answerMultiplier = (x > 180) ? -1 : 1;

    x = (x >= 180) ? x - 180 : x;

    x = x * (M_PI / 180);
    x2 = x * x;
    x4 = x2 * x2;

    sin += x - (x * x2) / ((long) 3 * 2 * 1);
    sin += (x * x4) / ((long) 5 * 4 * 3 * 2 * 1) - (x * x4 * x2) / ((long) 7 * 6 * 5 * 4 * 3 * 2 * 1);
    sin += (x * x4 * x4) / (9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1) - (x * x4 * x4 * x2) / ((long) 11 * 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1);
    sin += (x * x4 * x4 * x4) / (long) (13 * 12 * 11 * 10 * 9 * 8 * 7) / (long) (6 * 5 * 4 * 3 * 2 * 1) - (x * x4 * x4 * x4 * x2) / (long) (15 * 14 * 13 * 12 * 11 * 10 * 9 * 8 ) / (long) (7 * 6 * 5 * 4 * 3 * 2 * 1);
    
    if (sin > 0.1) {
        sin = ((int) (sin / 0.1 * 100 + 0.5)) * 0.1 / 100;
    } else if (sin > 0.01)
    {
        sin = ((int) (sin / 0.01 * 100 + 0.5)) * 0.01 / 100;
    } else if (sin > 0.001)
    {
        sin = ((int) (sin / 0.001 * 100 + 0.5)) * 0.001 / 100;
    } else if (sin > 0.0001)
    {
        sin = ((int) (sin / 0.0001 * 100 + 0.5)) * 0.0001 / 100;
    } else if (sin > 0.00001)
    {
        sin = ((int) (sin / 0.00001 * 100 + 0.5)) * 0.00001 / 100;
    } else if (sin > 0.000001)
    {
        sin = ((int) (sin / 0.000001 * 100 + 0.5)) * 0.000001 / 100;
    } else if (sin > 0.0000001)
    {
        sin = ((int) (sin / 0.0000001 * 100 + 0.5)) * 0.0000001 / 100;
    } else if (sin > 0.00000001)
    {
        sin = ((int) (sin / 0.00000001 * 100 + 0.5)) * 0.00000001 / 100;
    }

    cout << "sin(x) = " << answerMultiplier * sin << endl;

    return 0;
}