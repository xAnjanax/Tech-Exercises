#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;
    int rev = 0, temp = 0;

    for (int i = num; i != 0; i /= 10)
    {
        temp = i % 10;
        rev = (rev * 10) + temp;
    }

    cout << "The number in reverse is: " << rev << endl;
}
