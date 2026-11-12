#include <iostream>
using namespace std;

int main()
{
    int ticket_cost_adult = 120; // rupees
    int ticket_cost_child = 60;

    int num_adults = 4;
    int num_children = 3;

    cout << "Total amount: " << (ticket_cost_adult * num_adults) + (ticket_cost_child * num_children) << endl;
    return 0;
}
