#include <iostream>
using namespace std;

int main() {
    double ans = 0;
    int fact = 1;
    for (int i = 1; i <= 7; i++)
    {
        fact *= i;
        ans += (float) i/(fact);
    }
    cout << ans;
    return 0;
}