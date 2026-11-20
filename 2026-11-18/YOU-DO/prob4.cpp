#include <iostream>
using namespace std;

void addReturns(int *count, int returned);

void addReturns(int *count, int returned)
{
    int final_value = *(count) + returned;
    cout << final_value << endl;
}

int main()
{
    int shelf_count, no_of_returns;
    cin >> shelf_count >> no_of_returns;

    addReturns(&shelf_count, no_of_returns);
}