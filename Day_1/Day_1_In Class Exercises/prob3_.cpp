#include <iostream>
using namespace std;

int main()
{
    int cost_of_one_pencil = 7;
    int num_of_pencils_to_buy = 6;

    int price_of_pencils = cost_of_one_pencil * num_of_pencils_to_buy;

    cout << "Price of " << num_of_pencils_to_buy << " Pencils is: Rupees " << price_of_pencils << endl;
    return 0;
}