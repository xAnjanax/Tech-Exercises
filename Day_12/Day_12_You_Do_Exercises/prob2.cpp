#include <iostream>
using namespace std;

void showDemoMarks();

void showDemoMarks()
{
    int marks = 50;
    cout << marks;
}

int main()
{
    int input_mark;
    cin >> input_mark;

    showDemoMarks();
    cout << " / " << input_mark << endl;
}