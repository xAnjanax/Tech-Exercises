// given: 365 days per year, 30 days per month

#include <iostream>
using namespace std;

int main()
{
    int days_of_proj = 1200;
    int years = days_of_proj / 365;
    // int months = (days_of_proj % 365) / 12;
    int rem_days = days_of_proj % 365;
    int months = rem_days / 30;
    int days = rem_days % 30;

    cout << "Years: " << years << endl;
    cout << "Months: " << months << endl;
    cout << "Days: " << days << endl;
}