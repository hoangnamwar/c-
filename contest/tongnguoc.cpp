#include <iostream>
using namespace std;

uint64_t leng(uint64_t x)
{
    uint64_t dem = 0;
    while (x != 0)
    {
        x = x / 10;
        dem++;
    }
    return dem;
}
uint64_t muoi(int y)
{
    uint64_t s;
    s = 1;
    for (int k = 0; k < y; k++)
    {
        s = s * 10;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    uint64_t mang[2][n];
    uint64_t lon, be;
    for (int j = 0; j < n; j++)
    {   
        for (int i = 0; i < 2; i++)
        {
            cin >> mang[i][j];
        }
    }
    for (int j = 0; j < n; j++ )
    {
        if (mang[0][j] > mang[1][j])
        {
            lon = mang [0][j];
            be = mang [1][j];
        }
        else 
        {
            lon = mang [1][j];
            be = mang [0][j];
        }
        cout << lon + be * muoi( (leng(lon) - leng(be)) ) << endl;
    }
    return 0;
}

