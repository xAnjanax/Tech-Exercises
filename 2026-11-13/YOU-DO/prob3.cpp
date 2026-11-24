#include <iostream>
using namespace std;

int main()
{
    // int A[2][3] = {{2, 4, 6}, {1, 3, 5}};
    // int B[2][3] = {{3, 1, 2}, {4, 2, 1}};

    int A[2][3] = {{0, 0, 0}, {0, 0, 0}};
    int B[2][3] = {{-2, 3, 4}, {5, -6, 7}};

    int C[2][3];

    for (int rows = 0; rows < 2; rows++)
    {
        for (int cols = 0; cols < 3; cols++)
        {
            C[rows][cols] = A[rows][cols] + B[rows][cols];
        }
    }

    for (int rows = 0; rows < 2; rows++)
    {
        for (int cols = 0; cols < 3; cols++)
        {
            cout << C[rows][cols] << " ";
        }
        cout << endl;
    }
}