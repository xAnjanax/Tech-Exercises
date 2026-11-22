#include <iostream>
using namespace std;

int main()
{
    int n1, n2, lcm;
    cin >> n1 >> n2;

    if (n1 >= n2)
        lcm = n1;
    else
        lcm = n2;

    while (lcm % n1 != 0 || lcm % n2 != 0)
        lcm += 1;

    cout << "LCM = " << lcm << endl;
}
