#include <iostream>
using namespace std;

int perimeter(int side);

int perimeter(int length, int width);

int perimeter(int side)
{
    int perim = 4 * side;
    return perim;
}

int perimeter(int length, int width)
{
    int perim = 2 * (length + width);
    return perim;
}

int main()
{
    int sq_side, rec_length, rec_width;
    cin >> sq_side >> rec_length >> rec_width;

    cout << perimeter(sq_side) << " " << perimeter(rec_length, rec_width) << endl;
}