#include <iostream>
using namespace std;

int main()
{
    int cost_per_unit_100 = 3;
    int cost_per_unit_more_than_100 = 5;

    int units_used = 180;

    cout << ((units_used - 100) * cost_per_unit_more_than_100) + ((100) * cost_per_unit_100) << endl;
    return 0;
}