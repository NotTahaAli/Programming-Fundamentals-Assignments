#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x <= 300; x++)
    {
        bool isPrime = true;
        if (x == 1 || (x % 2 == 0 && x != 2))
            isPrime = false;
        else
        {
            for (int i = 3; i < x && i <= 19; i += 2) {
                if (x % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            cout << x << " ";
        }
    }
    return 0;
}