#include <iostream>
using namespace std;

int main()
{
    int parcel_code = 4026;
    int digit_sum = 0;
    int temp = 0;

    while (parcel_code)
    {
        temp = parcel_code % 10;
        digit_sum += temp;
        parcel_code /= 10;
    }

    cout << "Digit sum = " << digit_sum << endl;
}
