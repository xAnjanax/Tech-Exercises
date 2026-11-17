#include <iostream>
using namespace std;

int sumDigits(int number);

int sumDigits(int number)
{
    int sum = 0, temp;
    while (number != 0)
    {
        temp = number % 10;
        sum += temp;
        number /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cin >> num;

    cout << sumDigits(num) << endl;
}