#include <iostream>
using namespace std;

int main()
{
    int fixed_amt = 50; // rupees
    int per_km_charge = 12;
    int travel_kms = 15;

    cout << "Total Travel charge is: " << fixed_amt + (per_km_charge * travel_kms) << endl;
    return 0;
}
