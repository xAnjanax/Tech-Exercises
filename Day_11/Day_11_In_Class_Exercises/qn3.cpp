#include <iostream>
using namespace std;

int addScores(int first, int second);

int addScores(int first, int second)
{
    int total = first + second;
    // cout << total << endl;
    return total;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int sum = addScores(num1, num2);
    cout << sum << endl;
}