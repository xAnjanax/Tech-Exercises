// Factorial

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int fact;

    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }

    cout << "Factorial of " << n << " is: " << fact << endl;
}