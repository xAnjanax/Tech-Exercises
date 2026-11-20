#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18)
        cout << "\nEligible to Vote." << endl;
    else
        cout << "\nIneligible to Vote." << endl;
}
