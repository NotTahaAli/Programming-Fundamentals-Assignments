#include <iostream>
#include "calculatorFunctions.h"
#include "inputHandler.h"
using namespace std;

void inputNumbers(double &num1, double &num2)
{
    num1 = inputDouble("Enter Number 1 (Double): ");
    num2 = inputDouble("Enter Number 2 (Double): ");
}

void inputNumbers(int &num1, int &num2)
{
    num1 = inputInt("Enter Number 1 (Integer): ");
    num2 = inputInt("Enter Number 2 (Integer): ");
}

void inputNumbers(double &num1, int &num2)
{
    num1 = inputDouble("Enter Number 1 (Double): ");
    num2 = inputInt("Enter Number 2 (Integer): ");
}

void addMenu()
{
    double num1, num2;
    inputNumbers(num1, num2);
    cout << num1 << "+" << num2 << " = " << add(num1,num2) << endl;
}

void subtractMenu()
{
    double num1, num2;
    inputNumbers(num1, num2);
    cout << num1 << "-" << num2 << " = " << subtract(num1,num2) << endl;
}

void multiplyMenu()
{
    double num1, num2;
    inputNumbers(num1, num2);
    cout << num1 << "*" << num2 << " = " << multiply(num1,num2) << endl;
}

void divideMenu()
{
    double num1, num2;
    inputNumbers(num1, num2);
    if (num2 == 0)
    {
        cout << "Can not divide with 0." << endl;
        return;
    }
    cout << num1 << "/" << num2 << " = " << divide(num1,num2) << endl;
}

void modulusMenu()
{
    int num1, num2;
    inputNumbers(num1, num2);
    if (num2 == 0)
    {
        cout << "Can not modulus with 0." << endl;
        return;
    }
    cout << num1 << "%" << num2 << " = " << modulo(num1,num2) << endl;
}

void powerMenu()
{
    double num1;
    double num2;
    double ans;
    inputNumbers(num1, num2);
    if (power(num1, num2, ans)) {
        cout << num1 << " to the power of " << num2 << " = " << ans << endl;
    } else {
        cout << num1 << " to the power of " << num2 << " = Undefined." << endl;
    }
}

void calculatorMenu()
{
    char option = '\0';
    while (true)
    {
        cout << endl
             << "Which Type of Task do you want to perform?" << endl
             << "A. Addition" << endl
             << "B. Subtraction" << endl
             << "C. Multiplication" << endl
             << "D. Division" << endl
             << "E. Power" << endl
             << "X. Exit" << endl;
        option = inputChar("Choose Option: ");
        if (option == 'X' || option == 'x')
            break;
        if (option == 'A' || option == 'a')
            addMenu();
        else if (option == 'B' || option == 'b')
            subtractMenu();
        else if (option == 'C' || option == 'c')
            multiplyMenu();
        else if (option == 'D' || option == 'd')
            divideMenu();
        else if (option == 'E' || option == 'e')
            powerMenu();
        else
            cout << "Invaild Option, Try again." << endl;
    }
}