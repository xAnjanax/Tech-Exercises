#include <iostream>
using namespace std;

int main()
{
    int fixed_charge = 50; // base fare
    int extra_per_km_charge = 12;
    int kilometers_to_travel = 15; // km

    cout << "Cost for total travel: Rupees " << fixed_charge + (extra_per_km_charge * kilometers_to_travel) << endl;
    return 0;
}