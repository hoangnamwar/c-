#include <iostream>
using namespace std;

int main()
{
    uint64_t i, j, m, n, mid, dem, k;
    bool test;
    cin >> n;
    uint64_t a[n][100000];
    for (i = 0; i < n; i++)
    {
        cin >> m;
        a[i][0] = m;
        for (j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        dem  = 0;
        test = false;
        while (test == false)
        {
            test = true;
            for (j = 1; j < a[i][0]; j++)
            {
                // vong for duoi la sao 
                // for (k = j + 1; k <= a[i][0]; k++)
                if (a[i][j] > a[i][j + 1])
                {
                    // if (a[i][j] > a[i][k])
                    // {
                        test = false;
                        dem = dem + 1;
                        mid = a[i][j];
                        a[i][j] = a[i][j + 1];
                        a[i][j + 1] = mid;
                        // test = false;
                        // dem = dem + 1;
                        // mid = a[i][j];
                        // a[i][j] = a[i][k];
                        // a[i][k] = mid;
                        // ??   -_-   What the hell are doing?
                    // }
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}