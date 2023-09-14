#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a1 = -6;
    int a2 = -12;
    int a3 = 8;
    int a4 = 13;
    int a5 = 11;
    int a6 = 6;
    int a7 = 7;
    int a8 = 2;
    int a9 = -6;
    int a10 = -9;
    int a11 = -10;
    int a12 = 11;
    int a13 = 10;
    int a14 = 9;
    int a15 = 2;
    int numValues = 15;
    float mean = 0, standardDeviation = 0;

    mean += a1;
    standardDeviation += a1 * a1;
    mean += a2;
    standardDeviation += a2 * a2;
    mean += a3;
    standardDeviation += a3 * a3;
    mean += a4;
    standardDeviation += a4 * a4;
    mean += a5;
    standardDeviation += a5 * a5;
    mean += a6;
    standardDeviation += a6 * a6;
    mean += a7;
    standardDeviation += a7 * a7;
    mean += a8;
    standardDeviation += a8 * a8;
    mean += a9;
    standardDeviation += a9 * a9;
    mean += a10;
    standardDeviation += a10 * a10;
    mean += a11;
    standardDeviation += a11 * a11;
    mean += a12;
    standardDeviation += a12 * a12;
    mean += a13;
    standardDeviation += a13 * a13;
    mean += a14;
    standardDeviation += a14 * a14;
    mean += a15;
    standardDeviation += a15 * a15;

    mean /= numValues;

    standardDeviation /= numValues;

    standardDeviation -= mean * mean;
    standardDeviation = sqrt(standardDeviation);

    cout << "Mean = " << mean << endl
         << "Standard Deviation = " << standardDeviation << endl;

    return 0;
}