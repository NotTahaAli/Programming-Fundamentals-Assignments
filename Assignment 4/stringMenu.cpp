#include <iostream>
#include "stringHandler.h"
#include "inputHandler.h"
using namespace std;

char option = '\0';
char stringA[MAX_STRING_SIZE];
char stringB[MAX_STRING_SIZE];

void printStrings()
{
    cout << "String A: " << stringA << endl
         << "String B: " << stringB << endl;
}

void inputStrings()
{
    inputString(stringA, MAX_STRING_SIZE, "Enter String A: ");
    inputString(stringB, MAX_STRING_SIZE, "Enter String B: ");
    cout << "Your Inputs:" << endl;
    printStrings();
}

void concatMenu()
{
    while (true)
    {
        cout << "Which Type of Task do you want to perform?" << endl
             << "A. Concatenate String A on String B" << endl
             << "B. Concatenate String B on String A" << endl
             << "X. Cancel" << endl;
        option = inputChar("Choose Option: ");
        if (option == 'X' || option == 'x')
            break;
        if (option == 'A' || option == 'a')
        {
            cout << "Before:" << endl;
            printStrings();
            strConcat(stringB, stringA);
            cout << endl
                 << "After" << endl;
            printStrings();
            break;
        }
        else if (option == 'B' || option == 'b')
        {
            cout << "Before:" << endl;
            printStrings();
            strConcat(stringA, stringB);
            cout << endl
                 << "After" << endl;
            printStrings();
            break;
        }
        else
        {
            cout << "Invalid Option, Try again.";
        }
    }
}

void copyMenu()
{
    while (true)
    {
        cout << "Which Type of Task do you want to perform?" << endl
             << "A. Copy String A on String B" << endl
             << "B. Copy String B on String A" << endl
             << "X. Cancel" << endl;
        option = inputChar("Choose Option: ");
        if (option == 'X' || option == 'x')
            break;
        if (option == 'A' || option == 'a')
        {
            cout << "Before:" << endl;
            printStrings();
            strCopy(stringA, stringB);
            cout << endl
                 << "After" << endl;
            printStrings();
            break;
        }
        else if (option == 'B' || option == 'b')
        {
            cout << "Before:" << endl;
            printStrings();
            strCopy(stringB, stringA);
            cout << endl
                 << "After" << endl;
            printStrings();
            break;
        }
        else
        {
            cout << "Invalid Option, Try again.";
        }
    }
}

void editMenu()
{
    char find;
    while (true)
    {
        cout << "Which Type of Task do you want to perform?" << endl
             << "A. Edit String A" << endl
             << "B. Edit String B" << endl
             << "X. Cancel" << endl;
        option = inputChar("Choose Option: ");
        if (option == 'X' || option == 'x')
            break;
        if (option == 'A' || option == 'a')
        {
            cout << "Before:" << endl;
            printStrings();
            find = inputChar("Enter Character to Replace: ");
            strReplace(stringA, find, inputChar("Enter Character to Change With: "));
            cout << "After" << endl;
            printStrings();
            break;
        }
        else if (option == 'B' || option == 'b')
        {
            cout << "Before:" << endl;
            printStrings();
            find = inputUnsignedInt("Enter Character to Replace: ");
            strReplace(stringB, find, inputChar("Enter Character to Change With: "));
            cout << "After" << endl;
            printStrings();
            break;
        }
        else
        {
            cout << "Invalid Option, Try again.";
        }
    }
}

void stringMenu()
{
    inputStrings();
    while (true)
    {
        cout << endl
             << "Which Type of Task do you want to perform?" << endl
             << "A. Input Strings Again" << endl
             << "B. Get String Lengths" << endl
             << "C. String Concatenation" << endl
             << "D. String Copy" << endl
             << "E. String Edit" << endl
             << "F. Output Strings" << endl
             << "X. Exit" << endl;
        option = inputChar("Choose Option: ");
        if (option == 'X' || option == 'x')
            break;
        if (option == 'A' || option == 'a')
            inputStrings();
        else if (option == 'B' || option == 'b')
        {
            cout << "Length of String A: " << strLen(stringA) << endl
                 << "Length of String B: " << strLen(stringB) << endl;
        }
        else if (option == 'C' || option == 'c')
            concatMenu();
        else if (option == 'D' || option == 'd')
            copyMenu();
        else if (option == 'E' || option == 'e')
            editMenu();
        else if (option == 'F' || option == 'f')
            printStrings();
        else
            cout << "Invaild Option, Try again." << endl;
    }
}
