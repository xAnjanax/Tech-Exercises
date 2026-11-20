#include <iostream>
using namespace std;

int main()
{
    int card_drawn = 39; // number on card
    int temp_store = card_drawn;
    int dig_1, dig_2, count = 0;

    while ((temp_store % 10) and (temp_store / 10))
    {
        dig_1 = temp_store % 10;
        dig_2 = temp_store / 10;

        count += 1;
        // cout << "Count: " << count << endl;

        temp_store = dig_1 * dig_2;
    }

    cout << "Final digit = " << temp_store << endl;
    cout << "Rounds = " << count << endl;
}
