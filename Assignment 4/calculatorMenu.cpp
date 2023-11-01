#include <iostream>
#include "inputHandler.h"
using namespace std;

void inputNumbers(float &num1, float &num2)
{
    num1 = inputFloat("Enter Number 1 (Float): ");
    num2 = inputFloat("Enter Number 2 (Float): ");
}

void inputNumbers(int &num1, int &num2)
{
    num1 = inputInt("Enter Number 1 (Integer): ");
    num2 = inputInt("Enter Number 2 (Integer): ");
}

void inputNumbers(float &num1, int &num2)
{
    num1 = inputFloat("Enter Number 1 (Float): ");
    num2 = inputInt("Enter Number 2 (Integer): ");
}

void addMenu()
{
    float num1, num2;
    inputNumbers(num1, num2);
    cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
}

void subtractMenu()
{
    float num1, num2;
    inputNumbers(num1, num2);
    cout << num1 << "-" << num2 << " = " << num1 - num2 << endl;
}

void multiplyMenu()
{
    float num1, num2;
    inputNumbers(num1, num2);
    cout << num1 << "*" << num2 << " = " << num1 * num2 << endl;
}

void divideMenu()
{
    float num1, num2;
    inputNumbers(num1, num2);
    if (num2 == 0)
    {
        cout << "Can not divide with 0." << endl;
        return;
    }
    cout << num1 << "/" << num2 << " = " << num1 / num2 << endl;
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
    cout << num1 << "%" << num2 << " = " << num1 % num2 << endl;
}

void powerMenu()
{
    float num1;
    int num2;
    double ans = 1;
    bool negative = false;
    inputNumbers(num1, num2);
    if (num1 == 0 && num2 <= 0)
    {
        cout << num1 << " to the power of " << num2 << " = undefined" << endl;
        return;
    }
    else
    {
        if (num2 < 0) {
            num2 *= -1;
            negative = true;
        }
        for (int i = 0; i < num2; i++)
        {
            ans *= num1;
        }
        if (negative) {
            ans = 1/ans;
        }
    }
    cout << num1 << " to the power of " << num2 << " = " << ans << endl;
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