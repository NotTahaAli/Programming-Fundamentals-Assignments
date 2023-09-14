#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int num = 0;
    char chars[25];
    cout << "1. Assignment Executor" << endl
        << "2. Number Guessing Game" << endl
        << "3. Next Date Finder" << endl
        << "4. Age to Age Category" << endl
        << "5. Integer Checker" << endl
        << "6. Multiple Checker" << endl
        << "7. Vowel Checker" << endl
        << "8. Average Checker" << endl
        << "9. Auto Insurance" << endl
        << "10. Calory Recommender" << endl;
    cout << "Choose a Number from 1 to 10 to execute that program. ";
    cin >> num;
    if (num > 0 && num <= 10) {
        sprintf(chars, "23L-0954_problem_%d.exe",num);
        cout << endl << endl;
        system(chars);
    } else {
        cout << "Invalid Number";
    }
    return 0;
}