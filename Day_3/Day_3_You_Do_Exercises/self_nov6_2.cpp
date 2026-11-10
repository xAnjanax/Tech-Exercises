#include <iostream>
using namespace std;

int main()
{
    int dist_in_kms;

    cout << "Enter distance in kms: ";
    cin >> dist_in_kms;

    cout << "Distance in Miles: " << dist_in_kms * 0.621371 << endl;
}
