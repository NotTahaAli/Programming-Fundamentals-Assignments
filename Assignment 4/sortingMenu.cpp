#include <iostream>
#include "inputHandler.h"
#include "arrays.h"
using namespace std;

void bubbleSortMenu() {
    printArray("Previous Array");
    bubbleSort();
    printArray("New Array");
}

void insertionSortMenu() {
    printArray("Previous Array");
    insertionSort();
    printArray("New Array");
}

void selectionSortMenu() {
    printArray("Previous Array");
    selectionSort();
    printArray("New Array");
}

void sortingMenu()
{
    char option = '\0';
    inputArrayMenu();
    while (true)
    {
        cout << endl
             << "Which Type of Task do you want to perform?" << endl
             << "A. Input Array Again" << endl
             << "B. Bubble Sort" << endl
             << "C. Insertion Sort" << endl
             << "D. Selection Sort" << endl
             << "E. Output Array" << endl
             << "X. Exit" << endl;
        option = inputChar("Choose Option: ");
        if (option == 'X' || option == 'x')
            break;
        if (option == 'A' || option == 'a')
            inputArrayMenu();
        else if (option == 'B' || option == 'b')
            bubbleSortMenu();
        else if (option == 'C' || option == 'c')
            insertionSortMenu();
        else if (option == 'D' || option == 'd')
            selectionSortMenu();
        else if (option == 'E' || option == 'e')
            printArray();
        else
            cout << "Invaild Option, Try again." << endl;
    }
}