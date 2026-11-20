#include <iostream>
using namespace std;

int main()
{
    int rack_slots[6];
    int index_1, index_2;
    cin >> index_1 >> index_2;

    while (index_2 < index_1)
    {
        cout << "Please ensure that the second index is greater than equal to the first index: ";
        cin >> index_1 >> index_2;
    }

    int *ptr_1, *ptr_2;
    ptr_1 = &index_1;
    ptr_2 = &index_2;

    int difference = *(ptr_2) - *(ptr_1);
    cout << difference << endl;
}
