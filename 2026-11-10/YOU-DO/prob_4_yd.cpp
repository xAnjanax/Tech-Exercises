#include <iostream>
using namespace std;

int main()
{
    int base, exp, product_value = 1; 
    cin >> base >> exp; 

    for (int iter = 1; iter <= exp; iter++)
        product_value *= base; 

    cout << product_value << endl; 
}