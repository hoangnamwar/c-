#include <iostream>
using namespace std;

int main()
{
    uint64_t n, i, j, max;
    cin >> n;
    uint64_t a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max  = a[0];
    for (j = 0; j < n; j++)
    {
        if (a[j] > max)
            max  = a[j];
    }
    cout << max;
    return 0;
}