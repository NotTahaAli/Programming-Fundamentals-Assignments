#include <iostream>
using namespace std;

int main()
{
    int height = 0;
    cout << "Enter Height of Triangle: ";
    cin >> height;
    for (int i = 0; i <= height; i++)
    {
        long long iFac = 1;
        for (int x = 1; x <= i; x++)
        {
            iFac *= x;
        }
        for (int x = 0; x < height - i; x++)
        {
            cout << "    ";
        }
        long long xFac = 1;
        long long i_xFac = iFac;
        for (int x = 0; x <= i; x++)
        {
            xFac *= (x == 0) ? 1 : x;
            if (x > 0 && x < i) {
                i_xFac /= (i - x)+1;
            }
            long long ans = iFac / (xFac * i_xFac);
            cout << ans;
            int spaces = 8;
            while (ans > 0)
            {
                spaces--;
                ans /= 10;
            }
            for (int x = 0; x < spaces; x++)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}