#include <iostream>
using namespace std;

int main()
{
    int num = 66;
    // Optional input option
    // cout << "Enter a number: ";
    // cin >> num;

    if (num > 0)
        // cout << "\nThe number is positive." << endl;
        cout << ++num << endl;
    else
        // cout << "Original Number: " << num << endl;
        cout << num << endl;
}
