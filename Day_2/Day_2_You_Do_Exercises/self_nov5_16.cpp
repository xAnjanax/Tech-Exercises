#include <iostream>
using namespace std;

int main()
{
    int age = 10;
    bool hasCard = true;

    if (age > 12 or hasCard == true)
    {
        cout << "Can Borrow Books." << endl;
    }
    else
        cout << "Cannot Borrow Books." << endl;
}
