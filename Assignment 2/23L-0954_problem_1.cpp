#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int num = 0;
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
    if (num == 1 ) {
        system("23L-0954_problem_1.exe");
    } else if (num == 2 ) {
        system("23L-0954_problem_2.exe");
    } else if (num == 3 ) {
        system("23L-0954_problem_3.exe");
    } else if (num == 4 ) {
        system("23L-0954_problem_4.exe");
    } else if (num == 5 ) {
        system("23L-0954_problem_5.exe");
    } else if (num == 6 ) {
        system("23L-0954_problem_6.exe");
    } else if (num == 7 ) {
        system("23L-0954_problem_7.exe");
    } else if (num == 8 ) {
        system("23L-0954_problem_8.exe");
    } else if (num == 9 ) {
        system("23L-0954_problem_9.exe");
    } else if (num == 10 ) {
        system("23L-0954_problem_10.exe");
    } else {
        cout << "Invalid Number";
    }
    return 0;
}