#include <iostream>
using namespace std;

class Vehicle
{
private:
    int ID;

public:
    Vehicle()
    {
    }

    void set_ID()
    {
        cin >> ID;
    }

    int get_ID()
    {
        return ID;
    }
};

class Bus : public Vehicle
{
private:
    int seat_count;

public:
    Bus() : Vehicle()
    {
    }

    void set_seat_count()
    {
        cin >> seat_count;
    }

    int get_seat_count()
    {
        return seat_count;
    }
};

class Van : public Vehicle
{
private:
    int payload;

public:
    Van() : Vehicle()
    {
    }

    void set_payload()
    {
        cin >> payload;
    }

    int get_payload()
    {
        return payload;
    }
};

int main()
{
    Bus b1;
    cout << "Enter the bus ID: ";
    b1.set_ID();
    cout << "Enter the seat count: ";
    b1.set_seat_count();

    Van v1;
    cout << "Enter the van ID: ";
    v1.set_ID();
    cout << "Enter payload in kg: ";
    v1.set_payload();

    cout << "Bus " << b1.get_ID() << ": " << b1.get_seat_count() << " seats" << endl;
    cout << "Van " << v1.get_ID() << ": " << v1.get_payload() << " kg" << endl;
}