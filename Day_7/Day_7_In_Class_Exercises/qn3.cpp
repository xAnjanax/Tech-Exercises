#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int largest, temp;
    int rows = 3, columns = 4;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            temp = i * j;
            cout << temp << " ";
            sum += temp;
        }
        cout << endl;
        largest = temp;
    }

    cout << "\nSum of all cells: " << sum << endl;
    cout << "\nLargest of all cells: " << largest << endl;
}
