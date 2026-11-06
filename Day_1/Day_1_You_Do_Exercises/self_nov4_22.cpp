#include <iostream>
using namespace std;

int main()
{
    int num_of_bottles = 50;
    int num_of_sold_bottles = 8 + 1;
    int bottles_newly_delivered = 3;

    num_of_bottles--; // better than typing num_of_bottles = num_of_bottles--
    num_of_bottles -= 8;
    num_of_bottles += 3;

    cout << "Remaining Number of Bottles: " << num_of_bottles << endl;
    return 0;
}