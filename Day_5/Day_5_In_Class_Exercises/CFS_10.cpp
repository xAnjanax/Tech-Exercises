#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    if (num % 10 == 0)
        cout << "\nDivisible by 10" << endl;
    else
        cout << "\nNot divisible by 10" << endl;
}