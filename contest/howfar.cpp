#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string chuoi;
    getline( cin, chuoi);
    int64_t duoi = -2;
    int64_t a[10000];
    int64_t dau, i, j, k, x, cuoi, tong;
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
    uint64_t far[k + 2][k + 2];
    far[0][0] = 0;
    for (i = 1; i < k + 2; i++)
    {
        tong = 0;
        for (j = 0; j < i; j++)
        {
            tong = tong + a[j];
        }
        far[0][j] = tong;
    }
    for (i = 1; i < k + 2; i++)
    {
        tong = 0;
        for (j = 0; j < i; j++)
        {
            tong = tong + a[j];
        }
        far[i][0] = tong;
    }
    for (i = 1; i < k + 2; i++)
    {
        for (j = 1; j < k + 2; j++)
        {
            if (far[0][i] > far[j][0])
                far[i][j] = ( far[0][i] - far[j][0] );
            else
                far[i][j] = ( far[j][0] - far[0][i]);
        }
    }
    for (i = 0; i < k + 2; i++)
    {
        for (j = 0; j < k + 2; j++)
        {
            cout << far[i][j] << " ";
        }
        cout << endl;
    }
}
