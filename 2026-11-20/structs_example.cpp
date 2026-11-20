#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    int eng_Mark, math_Mark, science_Mark;
    int total;
    float average;
};

int main()
{
    // Student James;

    Student batch_of_students[15];

    for (int index = 0; index < 3; index++)
    {
        cout << "Student Entry Number: " << index << endl;
        cout << "Enter Name: ";
        cin >> batch_of_students[index].name;
        cout << "Enter Roll No: ";
        cin >> batch_of_students[index].rollNo;
        cout << "Enter English Marks: ";
        cin >> batch_of_students[index].eng_Mark;
        cout << "Enter Math Marks: ";
        cin >> batch_of_students[index].math_Mark;
        cout << "Enter Science Marks: ";
        cin >> batch_of_students[index].science_Mark;

        batch_of_students[index].total = batch_of_students[index].eng_Mark + batch_of_students[index].math_Mark + batch_of_students[index].science_Mark;
        batch_of_students[index].average = batch_of_students[index].total / 3.0;

        cout << endl;
    }

    // James.rollNo = 12;
    // James.name = "James";

    // cout << "Name of the student: " << James.name << endl;
    // cout << "Roll Number of the student: " << James.rollNo << endl;

    cout << endl;

    for (int index = 0; index < 3; index++)
    {
        cout << "Output: Student Number: " << index << endl;
        cout << "Name of Student: " << batch_of_students[index].name << endl;
        cout << "Roll Number of Student: " << batch_of_students[index].name << endl;
        cout << "English Marks of Student: " << batch_of_students[index].eng_Mark << endl;
        cout << "Math Marks of Student: " << batch_of_students[index].math_Mark << endl;
        cout << "Science Marks of Student: " << batch_of_students[index].science_Mark << endl;
        cout << "Total Marks of Student: " << batch_of_students[index].total << endl;
        cout << "Average Marks of Student: " << batch_of_students[index].average << endl;
        cout << endl;
    }
}

