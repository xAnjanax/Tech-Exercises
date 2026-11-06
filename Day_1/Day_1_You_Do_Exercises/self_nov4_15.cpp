#include <iostream>
using namespace std;

int main()
{
    int liters_held = 40;
    int total_liters_added = 12 * 10; // 12 liters in 10 minutes
    int liters_used = 35;

    cout << "Water left in tank: " << (liters_held + total_liters_added) - liters_used << endl;
    return 0;
}
