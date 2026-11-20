// cross check, something wrong

#include <iostream>
using namespace std;

int main()
{
    int upper_limit = 10;
    int count = 0;

    for (int i = 1; i <= upper_limit; i++)
    {
        for (int j = 2; j <= upper_limit; j++)
        {
            if (i % j == 0)
            {
                cout << i << endl;
                count += 1;
                break;
            }
        }
    }

    cout << "Matches = " << count << endl;
}
