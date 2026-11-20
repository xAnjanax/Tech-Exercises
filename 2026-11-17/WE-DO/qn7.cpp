#include <iostream>
using namespace std;

int twice(int amount);

double twice(double amount);

int twice(int amount)
{
    return 2 * amount;
}

double twice(double amount)
{
    return 2.0 * amount;
}

int main()
{
    int amt_int;
    double amt_dbl;
    cin >> amt_int >> amt_dbl;
    cout << twice(amt_int) << " " << twice(amt_dbl) << endl;
}