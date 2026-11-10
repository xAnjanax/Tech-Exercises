#include <iostream>
using namespace std;

int main()
{
    int race_completion_time = 5000; // seconds
    int hours = race_completion_time / 3600;
    int minutes = (race_completion_time % 3600) / 60;
    int seconds_left = race_completion_time % 60;

    cout << "Time : " << hours << " hours : " << minutes << " minutes : " << seconds_left << " seconds" << endl;
}
