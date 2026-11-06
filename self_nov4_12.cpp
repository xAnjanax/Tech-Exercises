#include <iostream>
using namespace std;

int main()
{
    int pens = 500;
    int pens_per_box = 12;

    cout << "Total Boxes Filled: " << pens / pens_per_box << endl;
    cout << "Pens Remaining: " << pens % pens_per_box << endl;
}
