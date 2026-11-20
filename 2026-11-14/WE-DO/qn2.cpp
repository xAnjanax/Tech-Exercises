#include <iostream>
using namespace std;

int main()
{
    int age;
    string full_name;

    cin >> age;
    cin.ignore(); // allows the user to input full_name
    getline(cin, full_name);

    cout << "Age: " << age << endl;
    cout << "Name: " << full_name << endl;
}
