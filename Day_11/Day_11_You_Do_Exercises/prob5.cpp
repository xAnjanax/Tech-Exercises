#include <iostream>
using namespace std;

double areaOfTriangle(double base, double height);

double areaOfTriangle(double base, double height)
{
    double area = (base * height) / 2;
    return area;
}

int main()
{
    double base_val, height_val, area;
    cin >> base_val >> height_val;
    area = areaOfTriangle(base_val, height_val);
    cout << area << endl;
}