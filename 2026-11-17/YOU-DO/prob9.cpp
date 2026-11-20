#include <iostream>
using namespace std;

int countDigits(int ticket);

int countDigits(int ticket)
{
    int count = 0;
    do
    {
        count += 1;
        ticket /= 10;
    } while (ticket != 0);
    return count;
}

int main()
{
    int ticket_number;
    cin >> ticket_number;

    cout << countDigits(ticket_number) << endl;
}