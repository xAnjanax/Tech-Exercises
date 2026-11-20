#include <iostream>
using namespace std;

int main()
{
    int og_stock_count, corrected_count;
    cin >> og_stock_count >> corrected_count;
    int *pointer_og = &og_stock_count;
    *(pointer_og) = corrected_count;
    cout << og_stock_count << endl;
}
