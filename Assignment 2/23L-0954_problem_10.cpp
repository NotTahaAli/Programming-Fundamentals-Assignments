#include <iostream>
using namespace std;

int main()
{
    int calories = 0;
    char activity = '\0';
    float weight = 0;
    cout << "Input Weight in pounds: ";
    cin >> weight;
    if (weight > 0)
    {
        cout << "Input Lifestyle ('A' for Active or 'S' for Sedentary): ";
        cin >> activity;
        if (activity == 'A')
        {
            calories = weight * 15;
            cout << "Recommended Calories: " << calories;
        }
        else if (activity == 'S')
        {
            calories = weight * 13;
            cout << "Recommended Calories: " << calories;
        }
        else
        {
            cout << "Invalid Input";
        }
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}