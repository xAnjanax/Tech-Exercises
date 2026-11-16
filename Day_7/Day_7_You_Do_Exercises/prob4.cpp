#include <iostream>
using namespace std;

int main()
{
    int attempt_number = 4;
    int start_attempt = 2;

    // for (int i = start_attempt; i <= attempt_number; i++)
    // {
    //     cout << i << endl;
    // }

    do
    {
        cout << start_attempt << endl;
        start_attempt += 1;
    } while (start_attempt <= attempt_number);
}