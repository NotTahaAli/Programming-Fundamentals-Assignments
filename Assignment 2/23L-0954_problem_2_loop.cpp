#include <iostream>
using namespace std;

int main()
{
    int min = 1;
    int max = 100;
    int mid = (min + max) / 2;
    char ans = '\0';
    for (; min < max;)
    {
        cout << "Is your number greater than " << mid << "? (y for Yes, n for No) ";
        cin >> ans;
        if (ans == 'y')
        {
            min = mid + 1;
        }
        else if (ans == 'n')
        {
            max = mid;
        }
        else
        {
            cout << "Please Enter a Valid Input" << endl;
        }
        mid = (min + max) / 2;
    }
    cout << "Your number is " << mid;
    return 0;
}