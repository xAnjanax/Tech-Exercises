#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    int a = 0, b = 1;
    int next = 0;

    cout << "The fibonacci series upto " << n << " is: \n";

    cout << a << endl;
    cout << b << endl;

    for (int i = 1; i <= n; i++)
    {
        next = a + b;
        cout << next << endl;

        a = b;
        b = next;
    }
}
