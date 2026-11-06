#include <iostream>
using namespace std;

int main()
{
    int journey_time = 200; // minutes
    int hours = journey_time / 60;
    int minutes = journey_time % 60;

    cout << "Time in Hours and Minutes: " << hours << " : " << minutes << endl;
    return 0;
}
