#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    if (num1 > num2)
        cout << num1 << " is the greatest." << endl;
    else if (num2 > num1)
        cout << num2 << " is the greatest." << endl;
    else
        cout << "Both numbers are equal." << endl;
}