#include <iostream>
using namespace std;

// Levelled down solution
// no additional boolean variable

int main()
{
    int lockers_arr[5] = {14, 27, 31, 27, 42};
    int request_value;
    cout << "Enter the locker value: ";
    cin >> request_value;

    for (int index = 0; index < 4; index++)
    {
        if (request_value == lockers_arr[index])
        {
            cout << "Locker Number " << request_value << " found at " << index << endl;
            return 0;
        }
    }

    cout << "Locker " << request_value << " not found." << endl;
}

// My Solution 

// int main()
// {
//     int lockers_arr[5] = {14, 27, 31, 27, 42};
//     // int requests_arr[4] = {27, 99, 47, 31}; // tested with extra values, changing size parameters in loops: works
//     int requests_arr[2] = {27, 99};
//     bool flag = true;
//     int flag_value;

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j <= 5; j++)
//         {
//             // cout << "Locker: " << lockers_arr[j];
//             // cout << "Request: " << requests_arr[i];
//             // cout << endl;
//             if (requests_arr[i] == lockers_arr[j])
//             {
//                 flag = true;
//                 cout << "Locker Match Found at: " << j << " as Value: " << lockers_arr[j] << endl;
//                 break;
//             }
//             else
//                 flag = false;
//         }
//         if (!flag)
//         {
//             cout << "Locker Match Not Found for Value: " << requests_arr[i] << endl;
//         }
//     }
// }
