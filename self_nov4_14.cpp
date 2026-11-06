#include <iostream>
using namespace std;

int main()
{
    int pens_bought = 25;
    int per_pen_cost_price = 8;
    int per_pen_selling_price = 11;

    cout << "Profit: " << (pens_bought * per_pen_selling_price) - (pens_bought * per_pen_cost_price) << endl;
    return 0;
}