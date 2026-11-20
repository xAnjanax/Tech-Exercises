#include <iostream>
using namespace std;

int main()
{
    int visit_fee = 150;
    int plus_charge_per_hour = 60;
    int work_time = 4; // hours

    cout << "Total charge: Rupees " << visit_fee + (plus_charge_per_hour * work_time) << endl;
    return 0;
}