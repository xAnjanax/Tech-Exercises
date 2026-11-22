#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    bool isPerfect = false;
    cin >> num;
    for (int iter = 0; iter < num; iter++)
    {
        if (num % iter == 0)
            sum += iter; // summing the divisors iteratively
        if (sum == num)
            isPerfect = true;
    }
    if (isPerfect)
        cout << "Perfect Number" << endl;
    else
        cout << "Not a Perfect Number" << endl;
}
