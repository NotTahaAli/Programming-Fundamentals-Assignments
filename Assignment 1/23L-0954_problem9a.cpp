#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Your Code Goes Here
    float pointA[2], pointB[2];

    cout << "Enter X Co-ordinates of Point A: ";
    cin >> pointA[0];

    cout << "Enter Y Co-ordinates of Point A: ";
    cin >> pointA[1];

    cout << "Enter X Co-ordinates of Point B: ";
    cin >> pointB[0];

    cout << "Enter Y Co-ordinates of Point B: ";
    cin >> pointB[1];

    cout << "Distance Between Points: " << sqrt((pointA[0] - pointB[0])*(pointA[0] - pointB[0]) +(pointA[1] - pointB[1])*(pointA[1] - pointB[1])) << endl;

    return 0;
}