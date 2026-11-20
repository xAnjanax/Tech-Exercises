#include <iostream>
using namespace std;

int main()
{
    int slot_holder[7] = {10, 15, 20, 30, 40, 50, 60};
    int cancelled_ticket = 15;

    for (int index = 0; index < 4; index++)
    {
        if (slot_holder[index] == cancelled_ticket)
        {
            slot_holder[index] = slot_holder[index + 1];
            slot_holder[index + 1] = slot_holder[index + 2];
        }
    }

    for (int index = 0; index < 7; index++)
    {
        cout << slot_holder[index] << " ";
    }
    cout << endl;
}