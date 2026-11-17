#include <iostream>
using namespace std;

int main()
{
    string color, target_substring;
    getline(cin, color);
    int position = color.find("blue");

    if (position)
    {
        target_substring = color.substr(position);
    }

    cout << target_substring << endl;
}
