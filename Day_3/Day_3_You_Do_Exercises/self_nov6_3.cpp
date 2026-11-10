#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the age: ";
    cin >> age;

    if (age >= 60)
    {
        cout << "Eligible for Senior citizen discount." << endl;
    }
    else
        cout << "Not Eligible for Senior citizen discount." << endl;

    return 0;
}
