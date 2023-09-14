#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 0;
    cout << "Input X and Y (respectively)";
    cin >> x >> y;
    cout << ((x % y == 0) ? "True" : "False");
    return 0;
}