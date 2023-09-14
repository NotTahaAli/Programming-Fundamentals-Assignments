#include <iostream>
using namespace std;

int main() {
    float ratePerNight = 0;
    int nightsStayed = 0;
    float roomServiceCharge = 0;
    float telephoneCharge = 0;
    float totalBill = 0;

    cout << "Per-Night Rate: $";
    cin >> ratePerNight;

    cout << "Nights Stayed: ";
    cin >> nightsStayed;

    cout << "One-Time Room Service Charge: $";
    cin >> roomServiceCharge;

    cout << "One-Time Telephone Charge: $";
    cin >> telephoneCharge;

    totalBill = ratePerNight*nightsStayed + roomServiceCharge
                + telephoneCharge;

    cout << "The Total Bill is $" << totalBill << endl;

    return 0;
}