#include <iostream>
using namespace std;

int main()
{
    int age = 17;
    bool license = true;

    if (age >= 18 or license == true)
    {
        cout << "Bike Rental Allowed." << endl;
    }
    else
    {
        cout << "Bike Rental Not Allowed." << endl;
    }

    return 0;
}