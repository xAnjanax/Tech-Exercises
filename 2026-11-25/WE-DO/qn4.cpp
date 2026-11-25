#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    Person(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }
};

class Student : public Person
{
private:
    int roll_no;

public:
    Student(string name__, int roll__) : Person(name__)
    {
        roll_no = roll__;
    }

    int getRoll()
    {
        return roll_no;
    }
};

class AssessmentReport : public Student
{
private:
    int mark_total;
    int theory_marks, lab_marks;

public:
    AssessmentReport(string name, int roll) : Student(name, roll)
    {
    }

    void set_marks(int th_marks, int l_marks)
    {
        theory_marks = th_marks;
        lab_marks = l_marks;
        mark_total = theory_marks + lab_marks;
    }

    int getTotal()
    {
        return mark_total;
    }
};

int main()
{
    string name_inp;
    int roll_inp;
    cout << "Enter the name: ";
    cin >> name_inp;
    cout << "Enter the roll: ";
    cin >> roll_inp;
    AssessmentReport a1(name_inp, roll_inp);

    int theory_m, lab_m;
    cout << "Enter theory marks: ";
    cin >> theory_m;
    cout << "Enter lab marks: ";
    cin >> lab_m;
    a1.set_marks(theory_m, lab_m);
    cout << a1.getName() << " | " << a1.getRoll() << " | " << a1.getTotal() << endl;
}