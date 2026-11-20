#include <iostream>
using namespace std;

const int hallCapacity = 30;

int remainingSeats(int occupied);

int remainingSeats(int occupied)
{
    int rem_seats = hallCapacity - occupied;
    return rem_seats;
}

int main()
{
    int num_of_occupied_seats;
    cin >> num_of_occupied_seats;

    cout << hallCapacity << " / " << remainingSeats(num_of_occupied_seats) << endl;
}