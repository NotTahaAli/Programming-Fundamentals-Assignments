#include <iostream>
using namespace std;

int main()
{
    int shape = 0;
    float volume = 0;
    double M_PI = 3.14159265358979323846;
    /*
        1. Box
        2. Sphere
        3. Prism
        4. Cylinder
    */

    cout << "Please Enter The number of the shape from the following list: "
         << endl
         << "1. Box"
         << endl
         << "2. Sphere"
         << endl
         << "3. Prism"
         << endl
         << "4. Cylinder"
         << endl;
    cin >> shape;

    if (shape == 1)
    {
        float l = 0, w = 0, h = 0;

        cout << "Enter Length of Box in cm: ";
        cin >> l;

        cout << "Enter Width of Box in cm: ";
        cin >> w;

        cout << "Enter Height of Box in cm: ";
        cin >> h;

        volume = l * w * h;
    }
    else if (shape == 2)
    {
        float r = 0;

        cout << "Enter radius of Sphere in cm: ";
        cin >> r;

        volume = M_PI * (r * r * r) * (4.0 / 3.0);
    }
    else if (shape == 3)
    {
        float b = 0, h = 0, H = 0;

        cout << "Enter base length of Triangle in cm: ";
        cin >> b;

        cout << "Enter height of Triangle in cm: ";
        cin >> h;

        cout << "Enter height of Prism in cm: ";
        cin >> H;

        volume = (1.0 / 2.0) * b * h * H;
    }
    else if (shape == 4)
    {
        float r = 0, H = 0;

        cout << "Enter radius of Base Circle in cm: ";
        cin >> r;

        cout << "Enter height of Cylinder in cm: ";
        cin >> H;

        volume = M_PI * (r * r) * H;
    }
    else
    {
        cout << "Invalid Shape" << endl;
        return 0;
    }

    cout << "Volume of Shape is " << ((int) ((volume * 100) + 0.5)) / 100.0 << " cm^2"
         << endl;

    return 0;
}