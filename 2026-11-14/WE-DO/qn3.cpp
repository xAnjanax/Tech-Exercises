#include <iostream>
using namespace std;

int main()
{
    string word = "MANGO";
    int length = word.size();

    cout << length << endl;
    cout << word[0] << endl;
    cout << word[2] << endl;
    cout << word[length - 1] << endl;
    cout << word[5] << endl; // no output : out of bounds
}
