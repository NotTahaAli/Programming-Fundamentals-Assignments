#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;

    cout << "Enter the value of a: ";
    cin >> a;

    if (a == 0)
    {
        cout << "Equation is not Quadratic" << endl;
        return 0;
    }

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    if ((b*b) - 4 * a * c < 0)
    {
        float d = sqrt(-1 * ((b*b) - 4 * a * c));

        float realPart = (float)(-1 * b) / (2 * a);
        float imaginaryPart = d / (2 * a);

        cout << "Roots of Quadratic Equation " << a << "x^2 + " << b << "x + " << c << " are " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << endl;
        return 0;
    }

    float d = sqrt((b*b) - 4 * a * c);

    float root1 = (-b + d) / (2 * a);
    float root2 = (-b - d) / (2 * a);

    cout << "Roots of Quadratic Equation " << a << "x^2 + " << b << "x + " << c << " are " << root1 << " and " << root2 << endl;

    return 0;
}