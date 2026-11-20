#include <iostream>
using namespace std;

int main()
{
    int readings_array[4];
    int num_of_readings = sizeof(readings_array) / sizeof(readings_array[0]);

    for (int index = 0; index < num_of_readings; index++)
    {
        cin >> readings_array[index];
    }

    int *pointer_to_first_element = readings_array;
    int offset;
    cin >> offset;

    int selected_reading;
    // selected_reading = *pointer_to_first_element + offset; // adds 2 to the first element

    selected_reading = *(pointer_to_first_element + offset);
    cout << selected_reading << endl;
}