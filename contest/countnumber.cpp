#include <iostream>
using namespace std;

int main()
{
    uint64_t n, m, i, j, dem;
    cin >> n >> m;
    uint64_t b[n], a[m];
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (i = 0; i < m; i++)
    {
        dem = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
                dem = dem + 1;
        }
        cout << dem << " ";
    }
}