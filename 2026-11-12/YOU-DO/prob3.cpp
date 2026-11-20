#include <iostream>
using namespace std;

int main()
{
    int rows = 4, columns = 6;
    int count_border_positions = 0;
    // string a = " . ";
    // string b = " # ";

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 or i == rows or j == 1 or j == columns)
            {
                cout << " # ";
                count_border_positions++;
            }
            // cout << b;
            else
                cout << " . ";
            // cout << a;
        }
        cout << endl;
    }
    cout << "Border Positions = " << count_border_positions << endl;
}