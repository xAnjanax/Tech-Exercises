#include <iostream>
#include <string>
using namespace std;

int main()
{
    string label;
    getline(cin, label);

    label.insert(label.size(), "S");
    cout << "Upon adding S: " << endl;
    cout << label << endl;

    label.erase(label.size() - 1);
    cout << "Upon removing S: " << endl;
    cout << label << endl;

    label.replace(0, 1, "B");
    cout << "Upon replacing C: " << endl;
    cout << label << endl;
}
