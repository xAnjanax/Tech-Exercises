#include <iostream>
using namespace std;

int main()
{
    int max_ticket_num = 9;
    int start_ticket = 15;
    int temp_ticket_num = start_ticket;

    do
    {
        cout << temp_ticket_num << endl;
        temp_ticket_num += 2;
    } while (temp_ticket_num <= max_ticket_num);
}
