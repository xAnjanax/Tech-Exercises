#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    string department;

    void displayCard()
    {
        cout << "ID " << id << endl;
        cout << "Name " << name << endl;
        cout << "Department " << department << endl;
    }
};

int main()
{
    Employee e1;

    cout << "Enter the employee ID: ";
    cin >> e1.id;

    cout << "Enter the employee name: ";
    cin >> e1.name;

    cout << "Enter the department: ";
    cin >> e1.department;

    e1.displayCard();
}