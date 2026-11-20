#include <iostream>
using namespace std;

int main()
{
    int money_owed = 85;
    int pay_per_visit = 20;

    // int starting_balance;
    int temp = money_owed;
    int count = 0;

    while (temp)
    {
        if (temp < pay_per_visit)
        {
            cout << temp << endl;
            count += 1;
            break;
        }
        else
        {
            temp -= pay_per_visit;
            cout << pay_per_visit << endl;
            count += 1;
        }
    }

    cout << "Visits = " << count << endl;
}