#include <iostream>
using namespace std;

int main()
{
    int stock = 30;
    int sold = stock-- - 4;
    int left = --stock + sold;

    cout << "Value of stock: " << stock << endl;
    cout << "Value of sold: " << sold << endl;
    cout << "Value of left: " << left << endl;

    return 0;
}
