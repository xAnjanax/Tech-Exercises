#include <iostream>
using namespace std;

int readTeamSize();

int readTeamSize()
{
    int teamSize;
    cin >> teamSize;
    while (teamSize > 6 or teamSize < 1)
    {
        cout << "Please enter a team size within 1 to 6: ";
        cin >> teamSize;
    }
    return teamSize;
}

int main()
{
    cout << readTeamSize() << endl;
}