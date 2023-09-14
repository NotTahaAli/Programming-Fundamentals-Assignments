#include <iostream>
using namespace std;

int main()
{
    float b1 = 0, b2 = 0, h = 0, area = 0;

    cout << "Enter the length of first parallel side in cm: ";
    cin >> b1;

    cout << "Enter the length of second parallel side in cm: ";
    cin >> b2;

    cout << "Enter the height of trapezoid in cm: ";
    cin >> h;

    area = (b1 + b2) * (h / 2);

    cout << "Area of Trapezoid is " << area << " cm^2" << endl;

    return 0;
}