#include <iostream>
#include "inputHandler.h"
#include "arrays.h"
using namespace std;

void linearSearchMenu() {
    float key = inputFloat("Enter Key: ");
    if (linearSearch(key)) {
        cout << "Key Found in Array." << endl;
    } else {
        cout << "Key Not Found in Array." << endl;
    }
}

void binarySearchMenu() {
    float key = inputFloat("Enter Key: ");
    if (binarySearch(key)) {
        cout << "Key Found in Array." << endl;
    } else {
        cout << "Key Not Found in Array." << endl;
    }
}

void searchMenu()
{
    char option = '\0';
    inputArrayMenu();
    while (true)
    {
        cout << endl
             << "Which Type of Task do you want to perform?" << endl
             << "A. Input Array Again" << endl
             << "B. Linear Search" << endl
             << "C. Binary Search (Auto Sort)" << endl
             << "D. Output Array" << endl
             << "X. Exit" << endl;
        option = inputChar("Choose Option: ");
        if (option == 'X' || option == 'x')
            break;
        if (option == 'A' || option == 'a')
            inputArrayMenu();
        else if (option == 'B' || option == 'b')
            linearSearchMenu();
        else if (option == 'C' || option == 'c')
            binarySearchMenu();
        else if (option == 'D' || option == 'd')
            printArray();
        else
            cout << "Invaild Option, Try again." << endl;
    }
}