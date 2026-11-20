#include <iostream>
using namespace std;

int main()
{
    int math_score = 90;
    int science_score = 85;
    int eng_score = 76;

    double avg1 = (math_score + science_score + eng_score) / 3;
    double avg2 = (math_score + science_score + eng_score) / 3.0;

    cout << "Avg1 value: " << avg1 << endl;
    cout << "Avg2 value: " << avg2 << endl;
}