#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int area_of_square_tiles, side_length;
    cin >> area_of_square_tiles;

    side_length = sqrt(area_of_square_tiles);
    cout << side_length << endl;
}