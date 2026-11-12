#include <iostream>
using namespace std;

int main()
{
    int distance = 360; // km
    int time = 4;       // hrs

    int speed = distance / time;
    cout << "Speed is: " << speed << endl;

    return 0;
}