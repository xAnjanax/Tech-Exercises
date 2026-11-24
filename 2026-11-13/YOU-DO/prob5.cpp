#include <iostream>
using namespace std;

int main()
{
    int items_sold[5];
    int items_count = sizeof(items_sold) / sizeof(items_sold[0]);

    for (int index = 0; index < items_count; index++)
    {
        cin >> items_sold[index];
    }

    for (int index = 0; index < items_count; index++)
    {
        cout << items_sold[index] << " ";
    }
    cout << endl;
}