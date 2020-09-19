#include <iostream>
#include <cmath>
using namespace std;

uint64_t songhichdao(uint64_t z)
{
    uint64_t so, chuso;
    so = 0;
    while(z != 0)
    {  
        chuso = z % 10;
        so = so * 10 + chuso;
        z = z / 10; 
    }   
    return so;
}

uint64_t ucln(uint64_t x, uint64_t y)
{
    uint64_t min, k, uc;
    if (x > y)
            min = y;
        else 
            min = x;
    for (k = 1; k <= min; k++)
    {
        if ((x % k == 0) && (y % k == 0))
        {
            uc = k;
        }
    }
    return uc;
}
int main()
{
    uint64_t m, n, dem, i, nghichdao;
    cin >> m >> n;
    dem = 0;
    for (i = m; i <= n; i++)
    {
        nghichdao = songhichdao(i);
        if( ucln(nghichdao, i) == 1)
            dem = dem + 1;
    }
    cout << dem;
}