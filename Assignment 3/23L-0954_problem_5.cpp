#include <iostream>
using namespace std;

int main() {
    double nlog = 0;
    double x = 0;
    double currPow = 0;
    double basePow = 0;
    cout << "Enter X: ";
    cin >> x;
    basePow = (x-1)/x;
    currPow = basePow;
    for (int i = 1; i <= 7; i++) {
        nlog += (1.0/i)*currPow;
        currPow *= basePow;
    }
    cout << "Natural Log Is: " << nlog;
    return 0;
}