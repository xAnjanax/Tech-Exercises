#include <iostream>
using namespace std;

int main()
{
    // int seating[2][3] = {{11, 12, 13}, {21, 22, 23}};
    int seating[2][3] = {{0, 2, 4}, {6, 8, 10}};

    for (int rows = 0; rows < 2; rows++)
    {
        for (int cols = 0; cols < 3; cols++)
        {
            cout << seating[rows][cols] << " ";
        }
        cout << endl;
    }
}