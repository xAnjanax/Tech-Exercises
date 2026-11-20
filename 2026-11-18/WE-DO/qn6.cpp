#include <iostream>
using namespace std;

void addBonus(int *score)
{
    int *parameter;
    parameter = score;
    // cout << score << " " << *(score) << " " << *parameter << endl;
    *(parameter) = *parameter + 5;
    // cout << *parameter << endl;
}

int main()
{
    int score;
    cin >> score;

    addBonus(&score);
    cout << score << endl; // printing the updated score in main()
}
