#include <iostream>
using namespace std;

class Announcement
{
public:
    void show()
    {
        cout << "General Announcement" << endl;
    }
};

class SportAnnouncement : public Announcement
{
public:
    void show()
    {
        cout << "Sports Announcement" << endl;
    }
};

int main()
{
    Announcement a1;
    SportAnnouncement sa1;

    cout << "1. General Announcement" << endl;
    cout << "2. Sports Announcement" << endl;
    cout << "3. General through Sports object" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        a1.show();
        break;
    case 2:
        sa1.show();
        break;
    case 3:
        a1 = sa1;
        a1.show();
        break;
    default:
        cout << "Incorrect option entered. Try again." << endl;
        break;
    }
}