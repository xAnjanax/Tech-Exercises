#include <iostream>
using namespace std;

class VolumeCalculator
{
private:
    int side;
    int length, width, height;

public:
    VolumeCalculator()
    {
        side = 0;
        length = 0, width = 0, height = 0;
    }

    int volume(int side_)
    {
        side = side_;
        return side * side * side;
    }

    int volume(int len, int wid, int height_)
    {
        length = len;
        width = wid;
        height = height_;
        return (length * width * height);
    }
};

int main()
{
    VolumeCalculator vc1;
    int s;
    int l, w, h;
    int choice;

    cout << "1. Cube" << endl;
    cout << "2. Rectangular Carton" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter side: ";
        cin >> s;
        cout << "Volume: " << vc1.volume(s) << " cubic centimetres" << endl;
        break;
    case 2:
        cout << "Length: ";
        cin >> l;
        cout << "Width: ";
        cin >> w;
        cout << "Height: ";
        cin >> h;
        cout << "Volume: " << vc1.volume(l, w, h) << " cubic centimetres" << endl;
        break;
    }
}