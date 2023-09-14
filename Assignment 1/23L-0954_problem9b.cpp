#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Your Code Goes Here
    float pointA[2] = {0, 0}, pointB[2] = {0, 0}, pointC[2] = {0, 0};
    float AB = 0, BC = 0, AC = 0;
    float p = 0, area = 0;

    cout << "Enter X Co-ordinates of Point A: ";
    cin >> pointA[0];

    cout << "Enter Y Co-ordinates of Point A: ";
    cin >> pointA[1];

    cout << "Enter X Co-ordinates of Point B: ";
    cin >> pointB[0];

    cout << "Enter Y Co-ordinates of Point B: ";
    cin >> pointB[1];

    cout << "Enter X Co-ordinates of Point C: ";
    cin >> pointC[0];

    cout << "Enter Y Co-ordinates of Point C: ";
    cin >> pointC[1];

    AB = sqrt((pointA[0] - pointB[0])*(pointA[0] - pointB[0]) +(pointA[1] - pointB[1])*(pointA[1] - pointB[1]));
    BC = sqrt((pointC[0] - pointB[0])*(pointC[0] - pointB[0]) +(pointC[1] - pointB[1])*(pointC[1] - pointB[1]));
    AC = sqrt((pointA[0] - pointC[0])*(pointA[0] - pointC[0]) +(pointA[1] - pointC[1])*(pointA[1] - pointC[1]));

    p = (AB + BC + AC) / 2;

    area = sqrt(p * (p - AB) * (p - BC) * (p - AC));

    cout << "Length of AB is " << AB << " units" << endl;
    cout << "Length of BC is " << BC << " units" << endl;
    cout << "Length of AC is " << AC << " units" << endl;
    cout << "Area of Triangle is " << area << " units^2" << endl;

    return 0;
}