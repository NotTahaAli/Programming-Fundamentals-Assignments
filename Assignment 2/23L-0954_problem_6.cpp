#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 0;
    cout << "Input X and Y (respectively)";
    cin >> x >> y;
    if (x % y == 0) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}