#include <iostream>
using namespace std;

int main() {
    // Given Data
    float initialMilesTravelled = 324;
    float initialGallonsUsed = 17;

    float milesTravelled = 0, gallonsUsed = 0;

    cout << "Enter Miles Traveled after " << initialMilesTravelled << ": ";
    cin >> milesTravelled;
    cout << "Enter Gallons Used after " << initialGallonsUsed << ": ";
    cin >> gallonsUsed;

    milesTravelled += initialMilesTravelled;
    gallonsUsed += initialGallonsUsed;

    // Calculating Mileage;
    float mileage = milesTravelled / gallonsUsed;

    cout << "Mileage: " << mileage << " Miles per Gallon" << endl;
    return 0;
}