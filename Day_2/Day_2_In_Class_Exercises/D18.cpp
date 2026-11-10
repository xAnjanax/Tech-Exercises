#include <iostream>
using namespace std;

int main()
{
    int code = 4827;
    int temp = code;
    int sum = 0;

    while (temp != 0)
    {
        sum += (temp % 10);
        temp = temp / 10;
    }

    cout << sum << endl;
}