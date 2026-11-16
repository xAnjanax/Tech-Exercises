#include <iostream>
using namespace std;

int greatestScore(int a, int b, int c);

int greatestScore(int a, int b, int c)
{
    if ((a >= b) and (a >= c))
    {
        // cout << a << " is the greatest." << endl;
        return a;
    }
    else if ((b >= c) and (b >= a))
    {
        // cout << b << " is the greatest." << endl;
        return b;
    }
    else if ((c >= a) and (c >= b))
    {
        // cout << c << " is the greatest." << endl;
        return c;
    }
    return 0;
}

int main()
{
    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    cout << greatestScore(a1, b1, c1) << endl;
}
