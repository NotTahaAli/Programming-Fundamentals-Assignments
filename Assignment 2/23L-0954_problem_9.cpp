#include <iostream>
using namespace std;

int main() {
    int cost = 500;
    float age = 0;
    cout << "Enter Age: ";
    cin >> age;
    int accidents = 0;
    cout << "Enter Number of Accidents: ";
    cin >> accidents;
    if (age < 25) {
        cost += 100;
    }
    if (accidents == 1) cost += 50;
    else if (accidents == 2) cost += 125;
    else if (accidents == 3) cost += 225;
    else if (accidents == 4) cost += 375;
    else if (accidents == 5) cost += 575;
    else if (accidents >= 6) {
        cout << "No Insurance" << endl;
        return 0;
    };
    cout << "Cost of Insurance is " << cost;
    return 0;
}