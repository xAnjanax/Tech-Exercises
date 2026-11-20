#include <iostream>
using namespace std;

int main()
{
    int log_of_ids[6]; // = {41, 72, 15, 72, 60, 72};
    int num_of_logs = sizeof(log_of_ids) / sizeof(log_of_ids[0]);
    int target_value_input, count = 0;

    cout << "IDs: " << endl;
    for (int index = 0; index < num_of_logs; index++)
    {
        cin >> log_of_ids[index];
    }

    cout << "Target: ";
    cin >> target_value_input;

    for (int index = 0; index < num_of_logs; index++)
    {
        if (log_of_ids[index] == target_value_input)
        {
            cout << index << " ";
            count++;
        }
    }

    cout << "Count: " << count << endl;
}