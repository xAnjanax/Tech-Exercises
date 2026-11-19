#include <iostream>
using namespace std;

int main()
{
    int tag_of_equipment;
    char letter;

    cin >> tag_of_equipment >> letter;
    void *pointer = &tag_of_equipment;

    // pointer = (int *)(pointer);
    // cout << *(&pointer) << " ";

    cout << *(int *)(pointer) << " ";

    // pointer = (char *)(pointer);
    pointer = &letter;
    cout << *(char *)(pointer) << endl;
    // cout << *(&pointer) << endl;
}
