#include <iostream>
using namespace std;

int main()
{
    int num_of_lanes = 5;
    int count = 0;

    for (int i = 1; i <= num_of_lanes; i++)
    {
        cout << i * 3 << endl;
        count += (i * 3);
    }

    cout << "Marker total = " << count << endl;
}