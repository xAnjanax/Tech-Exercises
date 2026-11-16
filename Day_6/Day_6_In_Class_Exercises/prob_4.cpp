// sum of numbers upto n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int sum = 0;
    int count = 0, p_s = 0;

    // using a basic for loop
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    // using the algorithm
    for (count = 1; count <= n; count++)
    {
        sum = p_s + count;
        p_s = sum;
    }

    cout << "Test: " << sum << endl;

    // using the (optional) formula to cross check:
    // int sum_by_formula = (n * (n + 1)) / 2;

    cout << "Sum of numbers up to " << n << " is: " << sum << endl;
    // cout << "Sum of numbers up to " << n << " by formula is: " << sum_by_formula << endl;
}