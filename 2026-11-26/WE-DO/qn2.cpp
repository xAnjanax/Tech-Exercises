#include <iostream>
#include <iomanip> // for precision of 2 decimal places in the output
using namespace std;

class BoardCalculator
{
private:
    int side;
    double length, width;

public:
    double area(int side_)
    {
        side = side_;
        return double(side * side);
    }

    double area(double len, double wid)
    {
        length = len;
        width = wid;
        return double(length * width);
    }
};

int main()
{
    BoardCalculator bc1;

    int choice;
    cout << "1. Square " << endl;
    cout << "2. Rectangle " << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int side_val;
        cout << "Enter side: ";
        cin >> side_val;
        cout << fixed << setprecision(2); // for precision of 2 decimal places in the output
        cout << "Area: " << bc1.area(side_val) << " square metres" << endl;
    }
    else if (choice == 2)
    {
        double len_val, wid_val;
        cout << "Enter length: ";
        cin >> len_val;
        cout << "Enter width: ";
        cin >> wid_val;
        cout << fixed << setprecision(2); // for precision of 2 decimal places in the output
        cout << "Area: " << bc1.area(len_val, wid_val) << " square metres" << endl;
    }
}
