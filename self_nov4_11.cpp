#include <iostream>
using namespace std;

int main()
{
    int fixed_charge = 30;
    int extra_charge_per_km = 9;
    int kms_traveled = 18;

    cout << "Total Charge: " << fixed_charge + (extra_charge_per_km * kms_traveled) << endl;
    return 0;
}
