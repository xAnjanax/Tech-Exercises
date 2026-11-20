#include <iostream>
using namespace std;

int addBonus(int score);

int addBonus(int score)
{
    int score_copy = score;
    return (score_copy + 5);
}

int main()
{
    int score_inp;
    cin >> score_inp;

    cout << score_inp << " " << addBonus(score_inp) << endl;
}