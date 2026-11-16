#include <iostream>
using namespace std;

int main()
{
    int num_scores = 5;
    int first_score = 30;
    int next_score = first_score;
    int count = 0, sum = 0;

    for (int i = 1; i <= num_scores; i++)
    {
        if (next_score >= 60)
        {
            count += 1;
            sum += next_score;
            cout << next_score << endl;
        }
        next_score += 10;
    }

    cout << "Qualified = " << count << endl;
    cout << "Qualifying Sum = " << sum << endl;
}