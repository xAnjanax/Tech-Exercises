#include <iostream>
using namespace std;

int sum(int first, int second);

int sum(int first, int second)
{
    int sum = first + second;
    return sum;
}

int main()
{
    int day_1, day_2, total;
    cin >> day_1 >> day_2;
    total = sum(day_1, day_2);
    cout << total << endl;
}