#include <iostream>
using namespace std;

int main()
{
    int attendance_records[5]; // = {28, 31, 26, 30, 29};
    int num_records = sizeof(attendance_records) / sizeof(attendance_records[0]);
    // int target_index = 2, target_value = 32;
    int target_index, target_value;

    cout << "Preset values: " << endl;
    ;
    for (int index = 0; index < num_records; index++)
    {
        cin >> attendance_records[index];
    }

    cout << "Enter the target index: ";
    cin >> target_index;
    cout << "Enter the target value: ";
    cin >> target_value;

    attendance_records[target_index] = target_value;

    for (int index = 0; index < num_records; index++)
    {
        cout << attendance_records[index] << " ";
    }

    cout << endl;
}