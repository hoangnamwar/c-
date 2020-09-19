#include <iostream>
using namespace std;

int main()
{
    uint64_t n, i, j;
    cin >> n;
    int64_t mang[2][n];
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < 2; i++ )
            {
                cin >> mang[i][j];
            }
    }
    for (j = 0; j < n; j++)
        {
            cout << mang[0][j] + mang[1][j] << endl;
        }
    return 0;
}