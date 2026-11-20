// Arrays continuation

#include <iostream>
using namespace std;

int main()
{
    int items_sold_list[5]; // = {8, 12, 6, 14, 10};
    int num_items_sold = sizeof(items_sold_list) / sizeof(items_sold_list[0]);

    for (int index = 0; index < num_items_sold; index++)
    {
        cin >> items_sold_list[index];
    }

    for (int index = 0; index < num_items_sold; index++)
    {
        cout << items_sold_list[index] << " ";
    }
    cout << endl;
}
