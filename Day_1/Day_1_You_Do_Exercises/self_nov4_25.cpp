#include <iostream>
using namespace std;

int main()
{
    uint32_t stock_counter_num_items = 5;
    int items_customer_bought = 7;

    cout << "Output: " << stock_counter_num_items - items_customer_bought << endl; // output: Output: 4294967294
    cout << "Output: " << items_customer_bought - stock_counter_num_items << endl; // output: Output: 2
    return 0;
}