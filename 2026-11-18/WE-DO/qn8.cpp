#include <iostream>
using namespace std;

int previewBalance(int balance, int cost);

int previewBalance(int balance, int cost)
{
    int new_bal = balance - cost;
    return new_bal;
}

int main()
{
    int current_bal, current_cost;
    cin >> current_bal >> current_cost;
    cout << current_bal << " " << previewBalance(current_bal, current_cost) << endl;
}