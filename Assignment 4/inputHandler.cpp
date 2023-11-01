#include <iostream>
#include <stdio.h>
using namespace std;

void inputFloatArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Floating Number at Position " << i << ": ";
        fflush(stdin);
        cin >> arr[i];
    }
}

float inputFloat(char message[] = "Enter Floating Number: ")
{
    float num;
    cout << message;
    fflush(stdin);
    cin >> num;
    return num;
}

int inputInt(char message[] = "Enter Integer: ")
{
    int num;
    cout << message;
    fflush(stdin);
    cin >> num;
    return num;
}

int inputUnsignedInt(char message[] = "Enter Positive Integer: ")
{
    int num;
    while (true)
    {
        cout << message;
        fflush(stdin);
        cin >> num;
        if (num >= 0) break;
        cout << "Number should be greater than or equal to 0." << endl;
    }
    return num;
}

char inputChar(char message[] = "Enter Character: ")
{
    char character;
    cout << message;
    fflush(stdin);
    cin >> character;
    return character;
}

void inputString(char arr[], int size, char message[] = "Enter String: ")
{
    cout << message;
    fflush(stdin);
    cin.getline(arr, size - 1);
}