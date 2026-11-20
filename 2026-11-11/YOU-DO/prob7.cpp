#include <iostream>
using namespace std;

int main()
{
    int queue_of_num_pages = 0;      // pages
    int pages_printed_per_batch = 5; // capacity
    int pages_remaining = queue_of_num_pages;
    int count = 0;

    while (pages_remaining >= 0)
    {
        if (pages_remaining == 0)
            break;

        if (pages_remaining < pages_printed_per_batch)
        {
            pages_remaining -= pages_remaining;
            cout << "Pages remaining = " << pages_remaining << endl;
            count += 1;
            break;
        }
        pages_remaining -= pages_printed_per_batch;
        cout << "Pages remaining = " << pages_remaining << endl;
        count += 1;
    }

    cout << "Batches = " << count << endl;
}
