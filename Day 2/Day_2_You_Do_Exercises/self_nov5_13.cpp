#include <iostream>
using namespace std;

int main()
{
    int celcius_temp = 36;
    int fahrenheit_temp_int = ((9 * celcius_temp) / 5) + 32;
    float fahrenheit_temp_float = ((9.0 * celcius_temp) / 5) + 32;

    cout << "Int Fahrenheit Temperature: " << fahrenheit_temp_int << endl;
    cout << "Float Fahrenheit Temperature: " << fahrenheit_temp_float << endl;

    return 0;
}
