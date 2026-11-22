#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = 2, count = 0;

    while (count < n)
    {
        bool is_prime = true;

        for (int iter = 2; iter < num; iter++)
        {
            if (num % iter == 0)
            {
                is_prime = false;
                // cout << div << endl;
                break;
            }
        }

        if (is_prime)
        {
            cout << num << endl;
            count++;
        }

        num++;
    }
}