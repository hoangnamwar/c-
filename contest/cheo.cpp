#include <iostream>
using namespace std;
int main()
{
    uint64_t n, m, i, j, sum, min;
    cin >> n >> m;
    uint64_t day[n][m];
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            cin >> day[i][j];
        }
    }

    sum = 0;
    if (n > m)
        min = m;
    else
        min = n;
    
    for (j = 0; j < min; j++)
    {
       sum = sum + day[j][j];
    }
    cout << sum;
}