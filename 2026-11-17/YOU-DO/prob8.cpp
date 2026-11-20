#include <iostream>
using namespace std;

int tablesNeeded(int students);

int tablesNeeded(int students)
{
    int tables_count;
    if (students % 4 == 0)
    {
        tables_count = students / 4;
        // cout << tables_count << endl;
    }
    else
    {
        tables_count = (students / 4) + 1;
        // cout << tables_count << endl;
    }
    return tables_count;
}

int main()
{
    int num_of_students;
    cin >> num_of_students;
    cout << tablesNeeded(num_of_students) << endl;
}
