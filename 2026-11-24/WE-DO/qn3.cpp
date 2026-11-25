#include <iostream>
using namespace std;

class Room
{
private:
    int length, width;

public:
    void setLength()
    {
        cout << "Enter the room length in metres: ";
        cin >> length;
    }

    void setWidth()
    {
        cout << "Enter the room width in metres: ";
        cin >> width;
    }

    int calcArea()
    {
        return (length * width);
    }
};

int main()
{
    Room r1;

    r1.setLength();
    r1.setWidth();
    cout << "Area " << r1.calcArea() << " square metres" << endl;
}