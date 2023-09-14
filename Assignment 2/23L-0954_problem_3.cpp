#include <iostream>
using namespace std;

int main()
{
    int day = 0;
    int month = 0;
    int year = 0;
    cout << "Enter Day, Month and Year (as Integers): ";
    cin >> day >> month >> year;
    day++;
    if (month < 1 || day < 1 || year < 0 || month > 12)
    {
        cout << "Invalid Date";
        return 0;
    }
    if (month == 2)
    {
        if (day > ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28))
        {
            if (day - ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28) > 1)
            {
                cout << "Invalid Date";
                return 0;
            }
            month++;
            day = 1;
        }
    }
    else if ((month <= 7 && month % 2 == 1) || (month > 7 && month % 2 == 0))
    {
        if (day > 31)
        {
            if (day - 31 > 1)
            {
                cout << "Invalid Date";
                return 0;
            }
            month++;
            day = 1;
        }
    }
    else if (day > 30)
    {
        if (day - 30 > 1)
        {
            cout << "Invalid Date";
            return 0;
        }
        month++;
        day = 1;
    }
    if (month > 12)
    {
        year++;
        month = 1;
    }
    cout << "New Date " << day << " " << month << " " << year;
    return 0;
}