#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    float average = 0;
    cout << "Enter 10 Numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8
        >> n9 >> n10;
    average = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
    average /= 10;
    int aboveAverage = 0;
    int belowAverage = 0;
    int averageNumbers = 0;
    cout << "Average is " << average << endl;
    if (n1 > average) aboveAverage++; else if (n1 < average) belowAverage++; else averageNumbers++;
    if (n2 > average) aboveAverage++; else if (n2 < average) belowAverage++; else averageNumbers++;
    if (n3 > average) aboveAverage++; else if (n3 < average) belowAverage++; else averageNumbers++;
    if (n4 > average) aboveAverage++; else if (n4 < average) belowAverage++; else averageNumbers++;
    if (n5 > average) aboveAverage++; else if (n5 < average) belowAverage++; else averageNumbers++;
    if (n6 > average) aboveAverage++; else if (n6 < average) belowAverage++; else averageNumbers++;
    if (n7 > average) aboveAverage++; else if (n7 < average) belowAverage++; else averageNumbers++;
    if (n8 > average) aboveAverage++; else if (n8 < average) belowAverage++; else averageNumbers++;
    if (n9 > average) aboveAverage++; else if (n9 < average) belowAverage++; else averageNumbers++;
    if (n10 > average) aboveAverage++; else if (n10 < average) belowAverage++; else averageNumbers++;
    cout << aboveAverage << " numbers are above average." << endl;
    cout << belowAverage << " numbers are below average." << endl;
    cout << averageNumbers << " numbers lie exactly on average." << endl;
    return 0;
}