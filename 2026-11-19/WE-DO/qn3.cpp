#include <iostream>
using namespace std;

int main()
{
    int counter_1, counter_2;
    cin >> counter_1 >> counter_2;
    int *p = &counter_1;
    int *q = p;
    (*(q))++;
    q = &counter_2;
    cout << *p << " " << *q << endl;
}
