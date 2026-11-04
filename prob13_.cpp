#include <iostream>
using namespace std;

int main()
{
    int movie_len_in_mins = 135;
    int time_in_hrs = 135 / 60;
    int time_in_mins = movie_len_in_mins - (60 * time_in_hrs);

    cout << "Movie Time: Hours: " << time_in_hrs << " Minutes: " << time_in_mins << endl;
    return 0;
}
