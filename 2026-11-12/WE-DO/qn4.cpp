#include <iostream>
using namespace std;

int main()
{
    int target = 1000;
    int start_population_cells = 5;
    int i = start_population_cells, count = 0;

    while (i <= target)
    {
        i = i * 2;
        count += 1;
        // cout << i << endl;
    }

    cout << "Hours: " << count << endl;
    cout << "Cells: " << i << endl;
}
