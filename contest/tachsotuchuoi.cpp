#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string chuoi;
    getline( cin, chuoi);
    // cout << chuoi << endl;
    // cout << chuoi.length() << endl;
    // cout << chuoi.size() << endl;
    int64_t duoi = -2;
    int64_t a[100];
    int64_t dau, i, j, k, x, cuoi;
    k = -1;
    for (i = 0; i < 100; i++)
    {
        a[i] = 0;
    }
    for (i = 0; i < chuoi.length(); i++ )
    {
        if (chuoi[i] == ' ')
        {
            dau = duoi + 2;
            duoi = i - 1; 
            k = k + 1;
            // cout << duoi <<" " << dau << " " << k << " ";
            for (j = dau; j <= duoi; j++)
            {
                x = int(chuoi[j]) - 48;
                a[k] = x * pow(10 , duoi - j) + a[k];
            }
            cuoi = i;
        }
    }
    dau = cuoi + 1;
    duoi = chuoi.length() - 1;
    k = k + 1;
    for (j = dau; j <= duoi; j++)
            {
                x = int(chuoi[j]) - 48;
                a[k] = x * pow(10 , duoi - j) + a[k];
            }
    for (i = 0; i <= k; i++)
    {
        cout << a[i] <<endl;
    }
    return 0;
}