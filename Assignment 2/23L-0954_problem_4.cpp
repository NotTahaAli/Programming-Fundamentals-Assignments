#include <iostream>
using namespace std;

int main() {
    float age = 0;
    cout << "Enter Age (as a decimal number) ";
    cin >> age;
    if (age <= 1) {
        cout << "You're a baby";
    } else if (age <= 3)
    {
        cout << "You're a toddler";
    } else if (age <= 12)
    {
        cout << "You're a child";
    } else if (age <= 19)
    {
        cout << "You're a teenager";
    } else if (age <= 60)
    {
        cout << "You're an adult";
    } else {
        cout << "You're an old codger";
    }
    return 0;
}