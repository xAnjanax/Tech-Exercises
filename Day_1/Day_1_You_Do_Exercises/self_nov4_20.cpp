#include <iostream>
using namespace std;

int main()
{
    int race_completion_time = 5000; // seconds
    int hours = race_completion_time / 3600;
    int minutes = (race_completion_time % 3600) / 60;
    int remaining_seconds = race_completion_time % 60;

    cout << "Converted Time: " << hours << " : " << minutes << " : " << remaining_seconds << endl;
    return 0;
}
