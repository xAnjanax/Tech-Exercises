// question 4 

#include <iostream>
using namespace std;

int main()
{
    int marks_list[5];
    int num_marks = sizeof(marks_list) / sizeof(marks_list[0]);

    for (int index = 0; index < num_marks; index++)
    {
        cin >> marks_list[index];
    }

    cout << marks_list[2] << " " << marks_list[num_marks - 1] << endl;
}