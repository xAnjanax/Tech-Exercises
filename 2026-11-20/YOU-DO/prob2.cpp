#include <iostream>
using namespace std;

class FruitPurchase
{
public:
    int quantity, unitPrice;

    int totalCost()
    {
        return quantity * unitPrice;
    }
};

int main()
{
    FruitPurchase fp1;

    cout << "Quantity ";
    cin >> fp1.quantity;
    cout << "Unit Price ";
    cin >> fp1.unitPrice;

    cout << "Total cost " << fp1.totalCost() << endl;
}