#include <iostream>
using namespace std;

int main()
{
    int cost_of_order = 350;
    bool is_member = true;

    if (cost_of_order > 500 or is_member)
    {
        cout << "Free Delivery Applicable." << endl;
    }
    else
        cout << "Free Delivery Not Applicable." << endl;
}