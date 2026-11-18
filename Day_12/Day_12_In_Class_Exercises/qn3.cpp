#include <iostream>
using namespace std;

void printOrder(int items);

void printOrder(int items)
{
    if (items >= 10)
    {
        // int extraBoxes = items - 10; // gives number of items remaining
        // int extraBoxes = 1; // setting extraBoxes to 1
        int extraBoxes = items / 10;
        cout << extraBoxes << " / ";
    }
    cout << items << endl;
}

int main()
{
    int num_of_items;
    cin >> num_of_items;
    printOrder(num_of_items);
}