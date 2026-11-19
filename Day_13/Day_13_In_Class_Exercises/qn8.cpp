#include <iostream>
using namespace std;

int main()
{
    int steps_count[5];
    int num_of_counts = sizeof(steps_count) / sizeof(steps_count[0]);
    int *pointer = steps_count;
    int sum = 0;

    for (int index = 0; index < num_of_counts; index++)
    {
        cin >> steps_count[index];
        sum += *(pointer + index);
    }

    cout << sum << endl;
}
