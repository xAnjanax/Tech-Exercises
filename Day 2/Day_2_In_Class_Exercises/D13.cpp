#include <iostream>
using namespace std;

int main()
{
    int celcius_temp = 37;
    int fahr_a_int = ((9 * celcius_temp) / 5) + 32;
    double fahr_b_int = ((9.0 * celcius_temp) / 5) + 32;

    cout << "Temperature a as int: " << fahr_a_int << endl;
    cout << "Temperature b as float/double: " << fahr_b_int << endl;

    return 0;
}