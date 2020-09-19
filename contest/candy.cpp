#include <iostream>
using namespace std;

int main()
{
    uint64_t n, m, count, i, j, final;
    cin >> n >> m;
    uint64_t day[n];
    for (i = 0; i < n; i++)
    {
        cin >> day[i];
    }
    count = 0;
    j = 0;
    bool around = false;
    while (   (count != 2 * n) & (around == false)   )
    {
        around = true;
        for (i = 0; i < n; i++)
        {
            if (day[i] > m * j)
            {
                count++;
                final = i;
                around =false;
            }
        }
        j++;
    }
    cout << final + 1;
}