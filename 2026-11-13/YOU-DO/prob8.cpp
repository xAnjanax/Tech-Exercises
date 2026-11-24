#include <iostream>
using namespace std;

int main()
{
    int log_of_ids[6] = {41, 72, 15, 72, 60, 72};
    int count_of_matches = 0, target_value;

    cin >> target_value;

    for (int index = 0; index < 6; index++)
    {
        if (log_of_ids[index] == target_value)
        {
            cout << index << " ";
            count_of_matches++;
        }
    }

    if (count_of_matches)
    {
        cout << endl
             << "Count: " << count_of_matches << endl;
        return 0;
    }
    else
    {
        cout << endl
             << "No Matches. ";
        cout << endl
             << "Count: " << count_of_matches << endl;
    }
}