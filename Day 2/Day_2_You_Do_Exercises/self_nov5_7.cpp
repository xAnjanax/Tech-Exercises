#include <iostream>
using namespace std;

int main()
{
    double salary;
    char letter_grade;
    bool flag;

    cout << "Double size: " << sizeof(salary) << endl;
    cout << "Char size: " << sizeof(letter_grade) << endl;
    cout << "Bool size: " << sizeof(flag) << endl;

    cout << "Total size: " << sizeof(salary) + sizeof(letter_grade) + sizeof(flag) << endl;
    return 0;
}