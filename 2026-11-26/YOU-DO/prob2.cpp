#include <iostream>
#include <iomanip>
using namespace std;

class CafeBill
{
private:
    int quantity;
    double unit_price, packing_charge;

public:
    CafeBill()
    {
        quantity = 0;
        unit_price = 0.00;
    }

    double total(int qty, double uPrice)
    {
        quantity = qty;
        unit_price = double(uPrice);
        return (quantity * unit_price);
    }

    double total(int qty_, double u_Price, double packingCharge)
    {
        quantity = qty_;
        unit_price = double(u_Price);
        packing_charge = packingCharge;
        return ((quantity * unit_price) + packing_charge);
    }
};

int main()
{
    CafeBill cb1;
    int choice;
    int qty;
    double u_price, packing_charge;
    cout << "1. Ordinary order" << endl;
    cout << "2. Takeaway order" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter quantity: ";
        cin >> qty;
        cout << "Enter unit price: ";
        cin >> u_price;
        cout << fixed << setprecision(2);
        // cout << 15.50 * 2 << endl;
        cout << "Bill amount: " << cb1.total(qty, u_price) << endl;
        break;
    case 2:
        cout << "Enter quantity: ";
        cin >> qty;
        cout << "Enter unit price: ";
        cin >> u_price;
        cout << "Enter packing charge: ";
        cin >> packing_charge;
        cout << fixed << setprecision(2);
        cout << "Bill amount: " << cb1.total(qty, u_price, packing_charge) << endl;
        break;
    }
}