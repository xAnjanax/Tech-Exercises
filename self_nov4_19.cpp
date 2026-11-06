#include <iostream>
using namespace std;

int main()
{
    int token_num = 407;
    int rev = 0;

    while (token_num)
    {
        int temp = token_num % 10;
        rev += rev * temp;
        token_num /= 10;
    }

    cout << "Reversed Number: " << rev << endl;
}
