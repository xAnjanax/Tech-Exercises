#include <iostream>
using namespace std;

int countEvenTickets(int n);

int countEvenTickets(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int num_of_even_numbered_tickets = countEvenTickets(n);

    cout << num_of_even_numbered_tickets << endl;
}