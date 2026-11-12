#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int num_of_guests = 4;

    for (int i = 1; i <= num_of_guests; i++)
    {
        cout << i << endl;
        count += 1;
    }

    cout << "Badges = " << count << endl;
}