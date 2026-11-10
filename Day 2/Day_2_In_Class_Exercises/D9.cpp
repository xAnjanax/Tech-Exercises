#include <iostream>
using namespace std;

int main()
{
    int call_out_fee = 100; // rupees
    int per_hr_charge = 40;
    int time_in_hrs = 3;

    cout << "Total fee is: " << call_out_fee + (per_hr_charge * time_in_hrs) << endl;
    return 0;
}