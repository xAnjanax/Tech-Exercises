#include <iostream>
using namespace std;

class Fare
{
private:
    int base_amt;

public:
    Fare()
    {
        base_amt = 0;
    }

    void set_base_amt()
    {
        int base_amt_val_input;
        cin >> base_amt_val_input;
        base_amt = base_amt_val_input;
    }

    int get_base_amt()
    {
        return base_amt;
    }

    int virtual amount()
    {
        return base_amt;
    }
};

class ExpressFare : public Fare
{
private:
    int surcharge;

public:
    ExpressFare()
    {
        surcharge = 0;
    }

    void set_surcharge()
    {
        int surcharge_value;
        cin >> surcharge_value;
        surcharge = surcharge_value;
    }

    int amount() override
    {
        int base_amt_val = get_base_amt();
        return (base_amt_val + surcharge);
    }
};

int main()
{
    Fare f1;
    ExpressFare ef1;

    cout << "1. Standard" << endl;
    cout << "2. Express" << endl;
    cout << "3. Compare" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter base fare: ";
        f1.set_base_amt();
        cout << "Standard Fare: " << f1.amount() << endl;
        break;
    case 2:
        cout << "Enter base fare: ";
        ef1.set_base_amt();
        cout << "Enter express surcharge: ";
        ef1.set_surcharge();
        // cout << "Base fare: " << ef1.get_base_amt() << endl;
        cout << "Express fare: " << ef1.amount() << endl;
        break;
    case 3:
        cout << "Enter base fare: ";
        ef1.set_base_amt();
        cout << "Standard Fare: " << ef1.amount() << endl;
        cout << "Enter express surcharge: ";
        ef1.set_surcharge();
        cout << "Base fare: " << ef1.get_base_amt() << endl;
        cout << "Surcharge: " << ef1.amount() << endl;
        break;
    }
}