#include <iostream>
using namespace std;

int main()
{
    uint64_t n, i, j;
    cin >> n;
    uint64_t a[n][2];
    int64_t sum;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = a[i][0]; j <= a[i][1]; j++ )
        {
            if (j % 2 == 0)
                sum = sum + j;
            else
                sum = sum + j * (-1);
        }
        cout << sum << endl;
    }
}