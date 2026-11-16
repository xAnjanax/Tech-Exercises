#include <iostream>
#include <cstdlib>
using namespace std;

int temperatureGap(int first, int second);

int temperatureGap(int first, int second)
{
    int difference = abs(second - first);
    return difference;
}

int main()
{
    int first_temp, second_temp;
    cin >> first_temp >> second_temp;
    cout << temperatureGap(first_temp, second_temp) << endl;
}