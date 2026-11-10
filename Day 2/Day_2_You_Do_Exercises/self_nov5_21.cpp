#include <iostream>
using namespace std;

int main()
{
    int year = 1900;
    if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0)
    {
        cout << "It is a Leap Year.";
    }
    else
        cout << "Not a Leap Year.";
}
