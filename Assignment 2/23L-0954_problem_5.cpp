#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    cout << "Enter Integer: ";
    cin >> i;
    if (i == 0)
    {
        cout << "Integer is 0, it is even but neither positive nor negative";
    }
    else if (i > 0)
    {
        if (i % 2 == 0)
        {
            cout << "Integer is " << i << ", it is a positive even number.";
        }
        else
        {
            cout << "Integer is " << i << ", it is a positive odd number.";
        }
    }
    else
    {
        if (i % 2 == 0)
        {
            cout << "Integer is " << i << ", it is a negative even number.";
        }
        else
        {
            cout << "Integer is " << i << ", it is a negative odd number.";
        }
    }
    return 0;
}