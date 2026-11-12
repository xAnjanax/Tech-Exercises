#include <iostream>
using namespace std;

int main()
{
    int delivery_counts_arr[6]; // {12, 9, 15, 8, 17, 11}
    int inp_value_per_iter = 0;
    int length = sizeof(delivery_counts_arr) / sizeof(delivery_counts_arr[0]);

    cout << "Enter delivery count per day: " << endl;
    for (int index = 0; index < length; index++)
    {
        cin >> inp_value_per_iter;
        delivery_counts_arr[index] = inp_value_per_iter;
    }

    cout << "Values in reverse order: " << endl;
    // printing values in reverse order
    for (int index = length - 1; index >= 0; index--)
    {
        cout << delivery_counts_arr[index] << " ";
    }
    cout << endl;
}
