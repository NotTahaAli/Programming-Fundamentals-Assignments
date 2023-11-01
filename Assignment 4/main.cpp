#include <iostream>
#include "inputHandler.h"
#include "stringMenu.h"
#include "calculatorMenu.h"
#include "sortingMenu.h"
#include "searchMenu.h"
using namespace std;

int main()
{
    char option = '\0';
    while (true)
    {
        cout << endl
             << "Which Type of Task do you want to perform?" << endl
             << "A. String Manipulation" << endl
             << "B. Calculator" << endl
             << "C. Sorting" << endl
             << "D. Search" << endl
             << "X. Exit" << endl;
        option = inputChar("Choose Option: ");
        if (option == 'X' || option == 'x')
            break;
        if (option == 'A' || option == 'a')
            stringMenu();
        else if (option == 'B' || option == 'b')
            calculatorMenu();
        else if (option == 'C' || option == 'c')
            sortingMenu();
        else if (option == 'D' || option == 'd')
            searchMenu();
        else
        {
            cout << "Invalid Option, Try again." << endl;
        }
    }
    return 0;
}