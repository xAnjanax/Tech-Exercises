#include <iostream>
using namespace std;

double triangleArea(double base, double height);

double triangleArea(double base, double height)
{
    double area = base * height / (2);
    return area;
}

int main()
{
    double base_inp, height_inp;
    cin >> base_inp >> height_inp;
    cout << triangleArea(base_inp, height_inp) << endl;
}