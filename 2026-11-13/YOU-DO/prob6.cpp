#include <iostream>
using namespace std;

int main()
{
    int attendance[5];
    int target_index = 2, target_value;

    for (int index = 0; index < 5; index++)
    {
        cin >> attendance[index];
    }

    cin >> target_value;

    attendance[target_index] = target_value;

    for (int index = 0; index < 5; index++)
    {
        cout << attendance[index] << " ";
    }
    cout << endl;
}