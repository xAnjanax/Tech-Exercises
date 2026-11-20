// Arrays continuation

#include <iostream>
using namespace std;

int main()
{
    int quiz_marks[5] = {70, 45, 90, 60, 80};
    int index_1, index_2;

    // No need for a for loop
    // for (int index = 0; index < 5; index++)
    // {
    //     if (index == 2 or index == 4)
    //         cout << quiz_marks[index] << " ";
    // }

    cout << "Enter index 1: ";
    cin >> index_1;
    cout << "Enter index 2: ";
    cin >> index_2;

    cout << quiz_marks[index_1] << " " << quiz_marks[index_2] << endl;
}