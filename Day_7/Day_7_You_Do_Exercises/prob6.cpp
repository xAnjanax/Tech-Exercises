#include <iostream>
using namespace std;

int main()
{
    int upper_limit = 35;
    int last_digit;
    int first_digit;
    int count = 0;

    for (int i = 10; i <= upper_limit; i++)
    {
        first_digit = i / 10;
        last_digit = i % 10;

        if (first_digit == last_digit)
        {
            cout << i << endl;
            count += 1;
        }
    }

    cout << "Matches = " << count << endl;
}
