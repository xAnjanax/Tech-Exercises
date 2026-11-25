#include <iostream>
using namespace std;

class Employee
{
private:
    string phone;

public:
    Employee(string phone_)
    {
        phone = phone_;
    }

    // void set_phone_num()
    // {
    //     cin >> phone;
    // }

    string get_phone_num()
    {
        return phone;
    }
};

class Technician : public Employee
{
private:
    string role;

public:
    Technician(string num, string r) : Employee(num)
    {
        role = r;
    }

    // void role_setter()
    // {
    //     cin >> role;
    // }

    string role_getter()
    {
        return role;
    }
};

int main()
{
    string phone, role;
    cout << "Enter the phone number: ";
    cin >> phone;
    cout << "Enter the role: ";
    cin >> role;
    Technician t1(phone, role);

    cout << t1.role_getter() << ": " << t1.get_phone_num() << endl;
}