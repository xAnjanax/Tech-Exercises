#include <iostream>
using namespace std;

class Asset
{
private:
    int ID;

public:
    void setter_ID()
    {
        cin >> ID;
    }

    int getter_ID()
    {
        return ID;
    }
};

class Cylinder : public Asset
{
private:
    int capacity;

public:
    void setter_capacity()
    {
        cin >> capacity;
    }

    int getter_capacity()
    {
        return capacity;
    }
};

int main()
{
    Cylinder c1;
    cout << "Enter the asset ID: ";
    c1.setter_ID();
    cout << "Enter the capacity in litres: ";
    c1.setter_capacity();
    cout << "Asset " << c1.getter_ID() << endl;
    cout << "Capacity " << c1.getter_capacity() << " L" << endl;
}