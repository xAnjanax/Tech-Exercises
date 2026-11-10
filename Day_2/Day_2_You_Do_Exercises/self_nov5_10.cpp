#include <iostream>
using namespace std;

int main()
{
    int fixed_charge = 30;
    int plus_charge_per_km = 9;
    int travel_dist = 18;

    cout << "Total Fare: Rupees " << fixed_charge + (plus_charge_per_km * travel_dist) << endl;
    return 0;
}