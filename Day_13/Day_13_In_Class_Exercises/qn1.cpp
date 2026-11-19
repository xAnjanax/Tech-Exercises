#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;
    int *pointer = &score;
    cout << *(pointer) << " / ";
    if (pointer == &score)
        cout << pointer;
    cout << endl;
}