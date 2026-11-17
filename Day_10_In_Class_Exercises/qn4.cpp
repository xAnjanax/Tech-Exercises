#include <iostream>
using namespace std;

int main()
{
    int spaces_in_name = 0;
    string name;
    getline(cin, name);

    for (int index = 0; index <= name.size(); index++)
    {
        if (name[index] == ' ')
        {
            spaces_in_name++;
        }
    }

    cout << "Number of Spaces = " << spaces_in_name << endl; // For input Anu Priya S, output : 2
}
