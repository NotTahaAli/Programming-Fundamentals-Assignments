#include <iostream>
using namespace std;

int main()
{
    char smiley = 1;
    int height = 0;
    int width = 0;
    cout << "Enter width of Screen (in Pixels): ";
    cin >> width;
    cout << "Enter height of Screen (in Pixels): ";
    cin >> height;
    height /= 16;
    width /= 8;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << smiley;
        }
        cout << endl;
    }
    return 0;
}