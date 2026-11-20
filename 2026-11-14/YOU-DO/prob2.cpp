#include <iostream>
using namespace std;

int main()
{
    string word;
    getline(cin, word);

    for (int index = 0; index < word.size(); index++)
    {
        cout << word[index] << " : " << index << endl;
    }
}