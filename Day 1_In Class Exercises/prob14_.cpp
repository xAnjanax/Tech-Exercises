#include <iostream>
using namespace std;

int main()
{
    int num_of_notebooks = 40;
    int cost_price_per_nb = 18;
    int selling_price_per_nb = 25;

    int total_cost_price = 40 * 18;
    int total_selling_price = 40 * 25;

    cout << "Profit is: Rupees " << total_selling_price - total_cost_price << endl;
    return 0;
}

