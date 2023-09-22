#include <iostream>
using namespace std;

int main() {
    int rows = 0;
    cout << "Enter Rows: ";
    cin >> rows;
    for (int i = rows; i > 0; i--)
    {
        char c = 'A';
        for (int j = 0; j < i; j++)
        {
            cout << c << " ";
            c++;
        }

        for (int j = 0; j < 2*(rows - i) - 1; j++) {
            cout << "  ";
        }

        int iter = i;

        if (i == rows) {
            c--;
            iter--;
        }
        
        for (int j = 0; j < iter; j++)
        {
            c--;
            cout << c << " ";
        }
        cout << endl;
    }
    
    return 0;
}