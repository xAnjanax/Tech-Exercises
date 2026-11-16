#include <iostream>
using namespace std;

int main()
{
    int first_day_kms = 2;
    int kms_further = 2;
    int running_total = first_day_kms;
    int num_days = 4;
    int cur_day_kms = first_day_kms, days_count = 0;

    for (int i = 1; i <= num_days; i++)
    {
        cout << "Distance = " << cur_day_kms << ", Total = " << running_total << endl;
        cur_day_kms += kms_further;
        running_total += cur_day_kms;
        days_count += 1;
    }

    cout << "Days = " << days_count << endl;
}
