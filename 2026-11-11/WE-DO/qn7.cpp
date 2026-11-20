// Incorrect output with first week ... 0 weeks due to initialization outside the loop

#include <iostream>
using namespace std;

int main()
{
    int amt_to_be_saved = 50; // rupees
    int start_amt = 50;
    int amt_added_per_week = 20; // +20 rupees per week

    int final_amt = start_amt;
    int temp_amt = start_amt;
    int weeks_count = 0;
    int savings = 0;

    while (final_amt < amt_to_be_saved)
    {
        temp_amt += amt_added_per_week;
        final_amt += temp_amt;
        // cout << "Temp Amount Rn: " << temp_amt << endl;
        // cout << "Final Amount Rn: " << final_amt << endl;
        weeks_count += 1;
    }

    cout << "Weeks = " << weeks_count << endl;
    cout << "Savings = " << final_amt << endl;
}
