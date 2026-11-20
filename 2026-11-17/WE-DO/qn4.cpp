#include <iostream>
using namespace std;

void showSeats(int seats);

void showSeats(int seats)
{
    cout << seats << endl;
}

int main()
{
    int rowSeats;
    cin >> rowSeats;

    showSeats(rowSeats);
}

// seats can be used only within the showSeats function, and the main() function uses rowSeats.