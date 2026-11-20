#include <iostream>
using namespace std;

int readChoice();

int readChoice()
{
    int choice;
    cin >> choice;
    while ((choice != 1) and (choice != 2))
    {
        cout << "Please enter a choice of 1 or 2: ";
        cin >> choice;
    }
    return choice;
}

int main()
{
    cout << readChoice() << endl;
}