#include <iostream>
#include "stringHandler.h"
#include "inputHandler.h"
#include "stringMenu.h"
using namespace std;

void calculatorMenu()
{
}

int main()
{
    char option = '\0';
    while (true)
    {
        cout << "Which Type of Task do you want to perform?" << endl
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
        else {
            cout << "Invalid Option, Try again." << endl;
        }
    }
    return 0;
}