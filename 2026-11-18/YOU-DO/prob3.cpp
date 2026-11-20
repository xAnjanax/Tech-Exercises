#include <iostream>
using namespace std;

int main()
{
    int locker_number;
    cin >> locker_number;

    int *ptr = nullptr;
    if ((locker_number > 0) and (locker_number <= 30))
        ptr = &locker_number;
    if (ptr)
        cout << *(ptr) << endl;
    else
        cout << "No locker" << endl;
}