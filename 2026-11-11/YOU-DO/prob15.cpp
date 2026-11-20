#include <iostream>
using namespace std;

int main()
{
    int upper_limit = 25;
    int count_of_twos = 0;
    int first_digit, second_digit;

    for (int i = 1; i <= upper_limit; i++)
    {
        // for (int j = 1; j <= i; j++)
        // {
        int temp = i;
        first_digit = temp / 10;
        second_digit = temp % 10;
        // cout << first_digit << " " << second_digit << endl;
        if (first_digit == 2)
            count_of_twos++;
        if (second_digit == 2)
            count_of_twos++;
        // }
    }

    cout << "Digit 2 appearances = " << count_of_twos << endl;
}
