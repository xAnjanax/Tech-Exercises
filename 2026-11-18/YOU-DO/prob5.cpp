#include <iostream>
using namespace std;

int main()
{
    int exercise_durations[5], target;
    int num_of_durations = sizeof(exercise_durations) / sizeof(exercise_durations[0]);

    for (int index = 0; index < num_of_durations; index++)
    {
        cin >> exercise_durations[index];
    }

    cin >> target;

    int *ptr = exercise_durations;
    int count = 0;

    for (int index = 0; index < num_of_durations; index++)
    {
        if (*(ptr + index) >= target)
            count += 1;
    }

    cout << count << endl;
}