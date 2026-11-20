#include <iostream>
using namespace std;

void printDemo();

void printDemo()
{
    int count = 3; // local count value within the function is set to 3
    cout << count;
}

int main()
{
    int count; // to be read from the user input
    cin >> count;
    printDemo();
    cout << " / " << count << endl;
}

// Explain why both variables can share the same name.
// Both variables can share the same name, since the count declaration within the function printDemo() is local to its scope, thus not affecting the delaration in the main() function.
