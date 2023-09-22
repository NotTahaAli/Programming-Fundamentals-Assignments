#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int length = 1;
    cout << "Input n: ";
    cin >> n;
    cout << n;
    while (n != 1)
    {
        length++;
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        cout << " -> " << n;
    }
    cout << " ; length = " << length;
    return 0;
}