#include <iostream>
using namespace std;

int main()
{
    int sum_of_odd_squares = 0;
    int even_card_count = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            even_card_count++;
        else
            sum_of_odd_squares += (i * i);
    }

    cout << "Sum of Odd Squares: " << sum_of_odd_squares << endl;
    cout << "Number of Even Cards: " << even_card_count << endl;
}