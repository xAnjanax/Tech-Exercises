// 8 rows 6 benches in each row

#include <iostream>
using namespace std;

int main()
{
    int num_of_rows = 8;
    int num_of_benches_per_row = 6;

    int total_num_of_benches = num_of_rows * num_of_benches_per_row;

    cout << "Total number of benches: " << total_num_of_benches << endl;
    return 0;
}