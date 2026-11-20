#include <iostream>
using namespace std;

void greet(string name);

void greet(string name)
{
    cout << "Hello, " << name << "!" << endl;
}

int main()
{
    string full_name;
    getline(cin, full_name);

    greet(full_name);
}