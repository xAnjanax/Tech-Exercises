#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book_title;
    getline(cin, book_title);
    // std::string title = "The Jungle Book"; // same output

    // cout << title << endl;
    cout << book_title << endl;
}

// What do std and :: mean?
// std is the name of the standard library space
// :: is the scope resolution operator, instructs the compiler to look into the namespace for a specific feature.
