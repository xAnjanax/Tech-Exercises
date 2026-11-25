// Day 17 

#include <iostream>
using namespace std;

struct Book
{
    int book_id;
    string book_title;
    int available_copy_count;
};

int main()
{
    Book book_1;

    cout << "Enter the Book ID: ";
    cin >> book_1.book_id;

    cout << "Enter the Book Name: ";
    cin >> book_1.book_title;
    getline(cin >> ws, book_1.book_title);

    cout << "Enter the Number of Copies: ";
    cin >> book_1.available_copy_count;

    cout << endl;

    cout << "ID " << book_1.book_id << endl;
    cout << "Title " << book_1.book_title << endl;
    cout << "Copies " << book_1.available_copy_count << endl;
}
