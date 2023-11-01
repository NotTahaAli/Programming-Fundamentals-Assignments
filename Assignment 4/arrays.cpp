#include "inputHandler.h"
#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 100;

float arr[MAX_ARRAY_SIZE] = {0};

int currentSize = 0;

void inputArrayMenu()
{
    while (true)
    {
        currentSize = inputUnsignedInt("Enter the Number of Elements in Array: ");
        if (currentSize == 0)
        {
            cout << "Size should be greater than 0. Try again." << endl;
            continue;
        }
        if (currentSize > MAX_ARRAY_SIZE)
        {
            cout << "Size should be less than "<< MAX_ARRAY_SIZE <<". Try again." << endl;
            continue;
        }
        break;
    }
    inputFloatArray(arr, currentSize);
}

void printArray(char message[] = "Current Array: ")
{
    cout << message << "[";
    for (int i = 0; i < currentSize; i++)
    {
        cout << arr[i];
        if (i != currentSize - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

void bubbleSort()
{
    bool swap = false;
    int i, j;
    float temp;
    for (i = 1; i < currentSize; i++)
    {
        for (j = 0; j < currentSize - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = true;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (!swap)
            break;
    }
}

void insertionSort()
{
    int i, j;
    float temp;
    for (i = 1; i < currentSize; i++)
    {
        j = i;
        while (arr[j] < arr[j - 1])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

void selectionSort()
{
    int i, j;
    float temp;
    for (i = 0; i < currentSize - 1; i++)
    {
        for (j = i + 1; j < currentSize; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

bool linearSearch(float key)
{
    for (int i = 0; i < currentSize; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}

bool binarySearch(float key)
{
    bubbleSort();
    int min = 0;
    int max = currentSize;
    int mid;
    while (min <= max)
    {
        mid = (min + max) / 2;
        if (arr[mid] == key)
            return true;
        if (arr[mid] > key)
            max = mid - 1;
        if (arr[mid] < key)
            min = mid + 1;
    }
    return false;
}