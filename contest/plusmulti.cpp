#include <iostream>
using namespace std;
int main()
{
    uint64_t n, res, i;
    cin >> n;
    uint64_t day[n];
    for (i = 0; i < n; i++)
    {
        cin >> day[i];
    }
    res = 1;
    for (i = 1; i < (n - 1); i++)
    {
        res = res * day[i];
    }
    if (day[0] == 1)
    {
        if (day[n - 1] == 1)
            res = res + 2;
        else
            res = res * day[n - 1] + 1;
    }
    else
    {
        if (day[n - 1] == 1)
            res = res * day[0] + 1;
        else
            res = res * day[n - 1] * day[0];
    }

    cout << res;
}