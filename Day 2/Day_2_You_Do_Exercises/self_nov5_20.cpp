#include <iostream>
using namespace std;

int main()
{
    int num_customers_served = 20;

    // one more customer served
    num_customers_served++;

    // two customers served together
    num_customers_served += 2;

    // one ticket is cancelled
    num_customers_served -= 1;

    cout << "Final customer count: " << num_customers_served << endl;
}
