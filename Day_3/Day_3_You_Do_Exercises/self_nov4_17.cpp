#include <iostream>
using namespace std;

int main()
{
    int students = 1430;
    int students_per_bus = 50;

    cout << "Number of Full Buses: " << students / students_per_bus << endl;
    cout << "Students without a seat: " << students % students_per_bus << endl;
    return 0;
}
