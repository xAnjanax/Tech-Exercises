#include <iostream>
using namespace std;

class PracticeScore
{
private:
    int score;

public:
    PracticeScore()
    {
        score = 0;
    }

    void awardPoints()
    {
        score += 10;
    }

    int getScore()
    {
        return score;
    }
};

int main()
{
    PracticeScore ps1;

    int correct_answers;
    cout << "Correct Answers ";
    cin >> correct_answers;

    while (correct_answers)
    {
        ps1.awardPoints();
        correct_answers--;
    }

    cout << "Score " << ps1.getScore() << endl;
}