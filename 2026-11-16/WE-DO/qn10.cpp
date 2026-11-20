#include <iostream>
using namespace std;

int productOfDigits(int number);

int productOfDigits(int number)
{
    int product;
    int temp, count = 0;
    while (product / 10 != 0)
    {
        product = 1;
        if (number / 10 != 0)
        {
            while (number != 0)
            {
                temp = number % 10;
                product *= temp;
                number /= 10;
            }
            count += 1;
            number = product;
        }
        product = number;
    }
    cout << "Final digit: " << product << ", rounds " << count << endl;
    return 0;
}

int main()
{
    int num, prod, rounds;
    // prod, rounds = productOfDigits(num);
    cin >> num;
    productOfDigits(num);
    // cout << "Final digit: " << prod << ", rounds " << rounds << endl;
}