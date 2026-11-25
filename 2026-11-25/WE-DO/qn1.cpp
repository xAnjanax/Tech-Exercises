#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    void setter_name()
    {
        cin >> name;
    }

    string getter_name()
    {
        return name;
    }
};

class Instructor : public Person
{
private:
    string subject;

public:
    void setter_subj()
    {
        cin >> subject;
    }

    string getter_subj()
    {
        return subject;
    }
};

int main()
{
    Instructor I1;
    cout << "Enter the name: ";
    I1.setter_name();
    cout << "Enter the subject: ";
    I1.setter_subj();
    cout << I1.getter_name() << " teaches " << I1.getter_subj() << endl;
}