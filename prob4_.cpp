#include <iostream>
using namespace std;

int main()
{
    int total_num_of_chocolates = 50;
    int num_of_people = 7;

    int divided_num_of_chocolates = 50 / 7;
    int remainder = total_num_of_chocolates % num_of_people;

    cout << "Divided Chocolates Each Child gets: " << divided_num_of_chocolates << endl;
    cout << "Remaining Chocolates: " << remainder << endl;

    return 0;
}