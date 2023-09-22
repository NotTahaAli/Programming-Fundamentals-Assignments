#include <iostream>
using namespace std;

int main() {
    char smiley = 1;
    int height = 0;
    int width = 0;
    cout << "Enter height of Screen: ";
    cin >> height;
    cout << "Enter width of Screen: ";
    cin >> width;
    for (int i = 0; i < height * width; i++)
    {
        cout << smiley;
    }
    
    return 0;
}