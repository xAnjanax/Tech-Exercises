#include <iostream>
using namespace std;

int totalSavings(int days);

int totalSavings(int days)
{
    int savings = 0;
    for (int iter = 1; iter <= days; iter++)
    {
        savings += (iter * 5);
    }
    return savings;
}

int main()
{
    int num_days;
    cin >> num_days;
    cout << totalSavings(num_days) << " rupees" << endl;
}
