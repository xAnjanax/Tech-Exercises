#include <iostream>
using namespace std;

int main()
{
    string full_name;
    getline(cin, full_name);

    int position = full_name.find(' ');
    string target_string = full_name.substr(position + 1);

    cout << target_string << endl;
}
