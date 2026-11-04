#include <iostream>
using namespace std;

int main()
{
    int liters_per_min = 15;
    int total_minutes = 8;
    int liters_leaked = 20;

    cout << "Remaining water in the tank: " << (liters_per_min * total_minutes) - liters_leaked << endl;
    return 0;
}
