#include <iostream>
using namespace std;

int previewTickerPrice(int price);

int previewTicketPrice(int price)
{
    int fee = 20;
    return (price + fee);
}

int main()
{
    int original_price;
    cin >> original_price;

    cout << original_price << " " << previewTicketPrice(original_price) << endl;
}