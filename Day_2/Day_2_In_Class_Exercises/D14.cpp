#include <iostream>
using namespace std;

int main()
{
    int cost_first_100_units = 2;
    int cost_rest_units = 3;
    int units_used_by_house = 250;

    int total_cost = 0;

    total_cost = ((units_used_by_house - 100) * 3) + (100 * 2);

    // optional condition, if else statement, for when units used by the house is less than 100
    // if (units_used_by_house > 100)
    // {
    //     total_cost = ((units_used_by_house - 100) * 3) + (100 * 2);
    // }
    // else
    // {
    //     total_cost = units_used_by_house * 2;
    // }

    cout << "Total cost for the house is: " << total_cost << " Rupees" << endl;
}