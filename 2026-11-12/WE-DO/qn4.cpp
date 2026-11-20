// qn 3 can be written

#include <iostream>
using namespace std;

int main()
{
    // Readings = 18, 21, 19, 23, 20,
    int num_measurements = 5;
    int arr[5];
    int temp;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Reading " << i << ": ";
        cin >> temp;
        arr[i] = temp;
        // cout << endl;
        cout << "Checking Value: " << arr[i] << endl;
        cout << endl;
    }

    cout << "Readings List: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}