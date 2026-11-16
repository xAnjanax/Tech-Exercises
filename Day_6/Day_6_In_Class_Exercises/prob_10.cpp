#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;
    int sum = 0, temp = 0;

    for (int i = num; i != 0; i /= 10)
    {
        temp = i % 10;
        sum += temp;
    }

    cout << "Sum of the digits in " << num << " is: " << sum << endl;
}