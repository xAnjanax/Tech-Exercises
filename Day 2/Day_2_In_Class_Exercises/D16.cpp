#include <iostream>
using namespace std;

int main()
{
    int marks = 88;
    int attendance = 72;

    if (marks > 85 or attendance > 90)
        cout << "Scholarship Awarded." << endl;
    else
        cout << "Scholarship Not Awarded." << endl;
}