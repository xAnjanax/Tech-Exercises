#include <iostream>
using namespace std;

int payableAmount(int bill);

int payableAmount(int bill)
{
    int new_bill = bill;
    if (bill >= 500)
    {
        int discount = 50;
        new_bill = bill - discount;
    }
    return new_bill;
}

int main()
{
    int bill_input;
    cin >> bill_input;
    cout << payableAmount(bill_input) << endl;
}

// Discount is within the if block scope, checking whether the value of the bill is atleast 500.