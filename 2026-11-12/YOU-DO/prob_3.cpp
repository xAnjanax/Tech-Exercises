#include <iostream>
using namespace std;

int main()
{
    int data_arr[6] = {21, 35, 21, 44, 21, 50};
    int target_values[2] = {21, 99};
    int length = sizeof(data_arr) / sizeof(data_arr[0]);
    int match_count = 0;

    for (int index = 0; index < 2; index++)
    {
        match_count = 0;
        for (int index_ = 0; index_ < length; index_++)
        {
            if (data_arr[index_] == target_values[index])
                match_count++;
        }
        cout << "Count for Value " << target_values[index] << ": ";
        cout << match_count << endl;
    }
}