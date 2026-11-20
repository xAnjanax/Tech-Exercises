#include <iostream>
using namespace std;

int parcelCharge(int parcels);

int parcelCharge(int parcels, int fee);

int parcelCharge(int parcels)
{
    return (parcels * 10);
}

int parcelCharge(int parcels, int fee)
{
    return ((parcels * 10) + fee);
}

int main()
{
    int num_of_parcels, fee_amt;
    cin >> num_of_parcels >> fee_amt;
    cout << parcelCharge(num_of_parcels) << " " << parcelCharge(num_of_parcels, fee_amt) << endl;
}