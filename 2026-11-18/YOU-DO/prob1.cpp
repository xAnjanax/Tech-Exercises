// question 1

#include <iostream>
using namespace std;

int main()
{
    int weight_input;
    cin >> weight_input;
    int *pointer = &weight_input;

    cout << *(pointer) << endl;
}
