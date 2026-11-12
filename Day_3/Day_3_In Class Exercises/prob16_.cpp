#include <iostream>
using namespace std;

int main()
{
    int price_for_adults = 450;
    int price_for_children = 225;

    int num_of_adults = 3;
    int num_of_children = 2;

    int price_adults = num_of_adults * price_for_adults;
    int price_children = num_of_children * price_for_children;

    cout << "Total Train Ticket price: " << price_adults + price_children << endl;
    return 0;
}