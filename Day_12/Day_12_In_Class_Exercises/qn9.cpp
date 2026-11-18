#include <iostream>
using namespace std;

void showAmounts(int amount);

void showAmounts(int amount)
{
    if (amount > 0)
    {
        int amount = 2; // for the number of free samples
        cout << amount << " / ";
    }
    cout << amount << endl;
}

int main()
{
    int amt;
    cin >> amt;
    showAmounts(amt);
}