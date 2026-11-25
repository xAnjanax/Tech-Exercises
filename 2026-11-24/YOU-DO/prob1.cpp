#include <iostream>
using namespace std;

struct Book
{
public:
    string title;
    int book_id;
    int copies;
};

int main()
{
    Book b1;

    cin >> b1.title >> b1.book_id >> b1.copies;
    cout << "Title " << b1.title << " | " << "ID " << b1.book_id << " | " << "Copies " << b1.copies << endl;
}
