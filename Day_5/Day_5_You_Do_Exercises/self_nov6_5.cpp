#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter num 1: ";
    cin >> num1;

    cout << "Enter num 2: ";
    cin >> num2;

    if (num1 < num2)
    {
        cout << num1 << " is smaller than " << num2 << endl;
    }
    else if (num2 < num1)
    {
        cout << num2 << " is smaller than " << num1 << endl;
    }
    else
    {
        cout << "Smallest = " << num1 << endl;
    }
}
