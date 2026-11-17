#include <iostream>
using namespace std;

int main()
{
    int student_ids[6];
    int num_of_ids = sizeof(student_ids) / sizeof(student_ids[0]);
    int target_value;

    cout << "IDs: " << endl;

    for (int index = 0; index < num_of_ids; index++)
    {
        cin >> student_ids[index];
    }

    cout << "Target: ";
    cin >> target_value;

    for (int index = 0; index < num_of_ids; index++)
    {
        if (student_ids[index] == target_value)
        {
            cout << index;
            break;
        }
        else
        {
            cout << -1;
            break;
        }
    }
    cout << endl;
}
