#include <iostream>
using namespace std;

int main()
{
    int attendance_counts[2][3];

    for (int rows = 0; rows < 2; rows++)
    {
        for (int cols = 0; cols < 3; cols++)
        {
            cin >> attendance_counts[rows][cols];
        }
    }

    for (int index = 0; index < 2; index++)
    {
        for (int index_1 = 0; index_1 < 3; index_1++)
        {
            cout << attendance_counts[index][index_1] << " ";
        }
        cout << endl;
    }
}