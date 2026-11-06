#include <iostream>
using namespace std;

int main()
{
    int amount = 4860;

    int notes_500 = amount / 500;
    amount = amount % 500;
    if (notes_500 > 0)
        cout << "500 rupee notes: " << notes_500 << endl;

    int notes_100 = amount / 100;
    amount = amount % 100;
    if (notes_100 > 0)
        cout << "100 rupee notes: " << notes_100 << endl;

    int notes_50 = amount / 50;
    amount = amount % 50;
    if (notes_50 > 0)
        cout << "50 rupee notes: " << notes_50 << endl;

    int notes_10 = amount / 10;
    amount = amount % 10;
    if (notes_10 > 0)
        cout << "10 rupee notes: " << notes_10 << endl;
}
