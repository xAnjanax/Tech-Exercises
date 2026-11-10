#include <iostream>
using namespace std;

int main()
{
    int math_score = 82;
    int science_score = 91;
    int eng_score = 77;

    double avg1 = (math_score + science_score + eng_score) / 3;
    double avg2 = (math_score + science_score + eng_score) / 3.0;

    cout << "Value for avg1: " << avg1 << endl;
    cout << "Value for avg2: " << avg2 << endl;

    return 0;
}
