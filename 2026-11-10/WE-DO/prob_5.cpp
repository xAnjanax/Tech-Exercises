// Average of numbers from 1 to n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    float average = (float)sum / n;
    // int average = sum / n;

    // optional formula:
    // float average_by_formula = (float)(n + 1) / 2;
    // int average_by_formula = (n + 1) / 2;

    cout << "Average of numbers upto " << n << " is: " << average << endl;
    // cout << "Average of numbers by formula upto " << n << " is: " << average_by_formula << endl;
}