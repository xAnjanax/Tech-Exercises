#include <iostream>
using namespace std;

class EventBooking
{
private:
    int seatCount = 30;

public:
    // void set_seat_count()
    // {
    //     cin >> seatCount;
    // }

    int get_seat_count()
    {
        return seatCount;
    }

    void requestStatus()
    {
        int seats_requested;
        cout << "Enter the number of seats for request: ";
        cin >> seats_requested;
        if (seatCount >= 0)
        {
            if ((seats_requested <= seatCount) and (seats_requested != 0))
            {
                seatCount -= seats_requested;
                cout << "Accepted " << seatCount << endl;
            }
            else if ((seats_requested > seatCount) or (seats_requested == 0))
            {
                cout << "Rejected " << seatCount << endl;
            }
        }
    }
};

int main()
{
    EventBooking Event1;
    int num_of_requests;
    cout << "Enter the number of requests: ";
    cin >> num_of_requests;

    for (int i = 0; i < num_of_requests; i++)
        Event1.requestStatus();
}