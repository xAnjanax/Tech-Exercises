#include <iostream>
using namespace std;

int main()
{
    int seat_number = 0;
    cin >> seat_number;
    int *pointer = nullptr;
    if (seat_number > 0)
        pointer = &seat_number;
    if (pointer)
        cout << *pointer;
    else
        cout << "No seat";
    cout << endl;
}
