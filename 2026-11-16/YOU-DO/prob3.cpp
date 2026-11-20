#include <iostream>
using namespace std;

void sayHello(string name);

void sayHello(string name)
{
    cout << "Hello, " << name << "!" << endl;
}

int main()
{
    string full_name;
    getline(cin, full_name);
    sayHello(full_name);
}