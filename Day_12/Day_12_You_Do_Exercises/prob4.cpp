#include <iostream>
using namespace std;

int area(int side);

int area(int length, int width);

int area(int side)
{
    return side * side;
}

int area(int length, int width)
{
    return length * width;
}

int main()
{
    int side_input, length_input, width_input;
    cin >> side_input >> length_input >> width_input;
    cout << area(side_input) << " " << area(length_input, width_input) << endl;
}