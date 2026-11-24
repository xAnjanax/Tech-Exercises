#include <iostream>
using namespace std;

int main()
{
    int student_ids[6], target_value;
    for (int index = 0; index < 6; index++)
    {
        cin >> student_ids[index];
    }

    cin >> target_value;

    for (int index = 0; index < 6; index++)
    {
        if (student_ids[index] == target_value)
        {
            cout << index << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}