#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;
    int count = 0;

    // while (num != 0)
    for (int i = num; i != 0; i /= 10)
    {
        count += 1;
        num /= 10;
    }

    cout << "Number of digits is: " << count << endl;
}