#include <iostream>
using namespace std;

class Bus
{
private:
    int seat_counts;

public:
    void setStartingCount()
    {
        cin >> seat_counts;
    }

    int getSeatCount()
    {
        return seat_counts;
    }

    // remaining seats
    void bookSeats(int seats_to_book)
    {
        seat_counts = (seat_counts - seats_to_book);
        // return seat_counts;
    }
};

int main()
{
    Bus b1, b2;
    int seats_to_book_for_bus_1;

    cout << "Enter the available seats for Bus 1: ";
    b1.setStartingCount();

    cout << "Enter the availanle seats for Bus 2: ";
    b2.setStartingCount();

    cout << "Enter the number of seats to book on Bus 1: ";
    cin >> seats_to_book_for_bus_1;
    b1.bookSeats(seats_to_book_for_bus_1);

    cout << "Bus 1 available " << b1.getSeatCount() << endl;
    cout << "Bus 2 available " << b2.getSeatCount() << endl;
}