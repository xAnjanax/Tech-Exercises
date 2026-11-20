#include <iostream>
using namespace std;

int main()
{
    int tag_number = 6083;
    int count_even_nums = 0;
    int temp = tag_number;

    if (temp == 0)
        count_even_nums++;

    while (temp)
    {
        if (temp % 2 == 0)
            count_even_nums++;
        temp /= 10;
    }

    cout << "Even digits = " << count_even_nums << endl;
}