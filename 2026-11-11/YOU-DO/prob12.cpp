#include <iostream>
using namespace std;

int main()
{
    int board_side = 3;
    int dark_squares_count = 0;

    for (int i = 1; i <= board_side; i++)
    {
        for (int j = 1; j <= board_side; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 != 0)
                {
                    cout << " # ";
                    dark_squares_count++;
                }
                if (j % 2 == 0)
                    cout << " . ";
            }
            else if (i % 2 == 0)
            {
                if (j % 2 != 0)
                    cout << " . ";
                if (j % 2 == 0)
                {
                    cout << " # ";
                    dark_squares_count++;
                }
            }
        }
        cout << endl;
    }

    cout << "Dark squares = " << dark_squares_count << endl;
}
