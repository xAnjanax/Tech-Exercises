#include <iostream>
using namespace std;

int main()
{
    int scores_arr[5] = {55, 72, 68, 91, 83};
    int length = sizeof(scores_arr) / sizeof(scores_arr[0]);

    for (int index = 0; index < length; index++)
    {
        if (index == 1)
            scores_arr[index] = 76;
        if (index == 4)
            scores_arr[4] = 60;
    }

    for (int index = 0; index < length; index++)
        cout << scores_arr[index] << " ";
    cout << endl;
}