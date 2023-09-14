#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a = 0, b = 0, c = 0, p = 0, area = 0;

    cout << "Enter Length of first side in cm: ";
    cin >> a;

    cout << "Enter Length of second side in cm: ";
    cin >> b;

    cout << "Enter Length of third side in cm: ";
    cin >> c;

    p = (a + b + c) / 2;

    if (p < 0 || p <= a || p <= b || p <= c) {
        cout << "Input Lengths do not make up a valid triangle" << endl;
        return 0;
    }

    area = sqrt(p * (p-a) * (p-b) * (p-c));

    cout << "Area of Triangle is " << area << " cm^2" << endl;

    return 0;
}