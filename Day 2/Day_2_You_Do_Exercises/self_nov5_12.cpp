#include <iostream>
using namespace std;

int main()
{
    int bike_dist = 95; // kms
    int petrol_qty = 4; // liters

    int mileage1 = bike_dist / petrol_qty;
    double mileage2 = (double)bike_dist / petrol_qty;

    double lost = mileage2 - mileage1;

    cout << "Mileage: " << mileage1 << endl;
    cout << "Actual Mileage: " << mileage2 << endl;
    cout << "Lost: " << lost << endl;
}
