#include <iostream>
using namespace std;

int main() {
    char c = '\0';
    cout << "Enter Character: ";
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << "Character is a vowel";
    } else {
        cout << "Character is not a vowel";
    }
    return 0;
}