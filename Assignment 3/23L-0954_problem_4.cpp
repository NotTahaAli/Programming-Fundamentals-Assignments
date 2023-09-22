#include <iostream>
using namespace std;

int main() {
    // Assuming Combinations means that 112 == 211 so that will not be repeated
    // If 112 != 211, change j = i and k = j to j = 1 and k = 1 respectively;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j <= 3; j++)
        {
            for (int k = j; k <= 3; k++)
            {
                cout << i << j << k << endl;
            }
            
        }
        
    }
    
    return 0;
}