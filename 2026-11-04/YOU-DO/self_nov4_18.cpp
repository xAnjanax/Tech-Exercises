#include <iostream>
using namespace std;

int main()
{
    int code = 7351;
    int sum = 0;

    while (code)
    {
        int temp = code % 10;
        sum += temp;
        code /= 10;
    }

    cout << "Sum of the digits: " << sum << endl;
    return 0;
}
