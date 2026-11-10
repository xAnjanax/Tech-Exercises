#include <iostream>
using namespace std;

int main()
{
    int code = 7351;
    int sum = 0;

    while (code != 0)
    {
        sum += code % 10;
        // cout << sum << endl; // statement to check output
        code /= 10;
        // cout << "Code: " << code << endl; // statement to check output
    }

    cout << "Sum of digits in code: " << sum << endl;
}
