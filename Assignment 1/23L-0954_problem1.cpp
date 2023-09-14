#include <iostream>
using namespace std;

int main()
{
    // Given Data
    int totalPop = 80000;
    int menPercent = 52;
    int totalLiteracyPercent = 48;
    int totalLiterateMenPercent = 35;

    // Finding Illetrate Men
    int totalMen = totalPop * menPercent / 100;
    int literateMen = totalPop * totalLiterateMenPercent / 100;
    int illiterateMen = totalMen - literateMen;

    // Finding Illetrate Women
    int totalIllitrate = totalPop * (100 - totalLiteracyPercent) / 100;
    int illiterateWomen = totalIllitrate - illiterateMen;

    // Output The Information
    cout << "In the town there are " << illiterateMen << " men and "
         << illiterateWomen << " women who are illitrate, making a total of "
         << totalIllitrate << endl;
    return 0;
}