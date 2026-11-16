#include <iostream>
using namespace std;

int main()
{
    int locker_num = 1331;
    int rev = 0;
    int temp = locker_num;

    while (temp)
    {
        int temp_val = temp % 10;
        rev = (rev * 10) + temp_val;
        temp /= 10;
    }

    if (rev == locker_num)
    {
        cout << "It is a Palindrome." << endl;
    }
    else
        cout << "It is not a Palindrome." << endl;
}
