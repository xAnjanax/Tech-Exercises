#include <iostream>
using namespace std;

int main()
{
    string city_name;
    getline(cin, city_name);
    int space_taken = city_name.size();

    cout << space_taken << endl;
}