#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string chuoi;
    getline( cin, chuoi);
    int64_t duoi = -2;
    int64_t a[10000];
    int64_t dau, i, j, k, x, cdai, sum, lon, be, tb;
    k = -1;
    for (i = 0; i < 10000; i++)
    {
        a[i] = 0;
    }
    cdai = chuoi.length();
    for (i = 0; i < cdai; i++ )
    {
        if (chuoi[i] == ' ')
        {
            dau = duoi + 2;
            duoi = i - 1; 
            k = k + 1;
            for (j = dau; j <= duoi; j++)
            {
                x = int(chuoi[j]) - 48;
                a[k] = x + a[k] * 10;
            }
        }
    }
    duoi = -1;
    while (duoi != k)
    {
        x = a[duoi + 1];
        dau = duoi + 2;
        duoi = dau + x - 1;
        sum = 0;
        lon = 0;
        be = 0;
        for (i = dau; i <= duoi; i++)
        {
            sum = sum + a[i];
        }
        if (sum % x == 0)
        {
            tb = sum / x;
            for (i = dau; i < duoi; i++)
            {
                if (a[i] > tb)
                    lon = lon + 1;
                if (a[i] < tb)
                    be = be + 1;
            }
            if (lon > be)
                cout << lon << endl;
            if (lon < be)
                cout << be << endl;
            if (lon == be)
                cout << 0 << endl;
        }
        else 
            cout << -1 << endl;
    }
    return 0;
}