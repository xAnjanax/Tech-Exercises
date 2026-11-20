#include <iostream>
using namespace std;

int main()
{
    int rack_slots[6];
    int num_of_slots = sizeof(rack_slots) / sizeof(rack_slots[0]);
    int *ptr = rack_slots;

    for (int index = 0; index < num_of_slots; index++)
    {
        cin >> rack_slots[index];
    }

    for (int index = 0; index < num_of_slots; index++)
    {
        int temp_val = *(ptr + index);
        if (index + 1 == num_of_slots)
        {
            cout << -1;
        }
        if ((temp_val) == 0)
        {
            cout << index;
            break;
        }
    }

    cout << endl;
}
