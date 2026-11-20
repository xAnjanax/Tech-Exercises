#include <iostream>
using namespace std;

int main()
{
    string sign;
    int num_of_e = 0;
    getline(cin, sign);

    for (int index = 0; index < sign.size(); index++)
    {
        if (sign[index] == 'e')
            num_of_e++;
    }

    cout << num_of_e << endl;
}
