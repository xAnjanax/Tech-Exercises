#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {28, 31, 26, 30, 29};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before change: " << endl;
    for (int i = 0; i <= length - 1; i++)
    {
        cout << arr[i] << " ";
    }
    arr[2] = 32;

    cout << endl;
    cout << "Array after change: " << endl;

    for (int i = 0; i <= length - 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
