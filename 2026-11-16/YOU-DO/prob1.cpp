// Question 1 

#include <iostream>
using namespace std;

bool isPrime(int number);

bool isPrime(int number)
{
    if (number <= 1)
        return false;

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;
    cin >> num;

    if (isPrime(num))
        cout << "Prime" << endl;
    else
        cout << "Not prime" << endl;
}
