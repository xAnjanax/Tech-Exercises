#include <iostream>
using namespace std;

int main()
{
    int ticket_count, sold_tickets;
    cin >> ticket_count >> sold_tickets;

    int *ptr_sold = &sold_tickets;
    int remaining_tickets = ticket_count - *(ptr_sold);

    cout << remaining_tickets << endl;
}