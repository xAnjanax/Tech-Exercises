#include <iostream>
using namespace std;

class Reception
{
private:
    string name;
    string department;

public:
    void welcome(string name_)
    {
        name = name_;
        cout << "Welcome " << name << endl;
    }

    void welcome(string name, string dept)
    {
        department = dept;
        cout << "Welcome " << name << " to " << department << endl;
    }
};

int main()
{
    Reception r1;

    int choice;
    string n, dep;
    cout << "1. Name only " << endl;
    cout << "2. Name and department " << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter visitor name: ";
        cin >> n;
        r1.welcome(n);
    }
    else if (choice == 2)
    {
        cout << "Enter visitor name: ";
        cin >> n;
        cout << "Enter department name: ";
        cin >> dep;

        r1.welcome(n, dep);
    }
}