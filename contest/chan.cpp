#include <iostream>
using namespace std;

int main()
{
    int n, min, m;
    cout << "nhap vao so phan tu mang ";
    cin >> m;
    int a[n][m];
    n = 2;
    for (int i = 0; i< n; i++)
    {
        for (int j = 0; j < m; j++)
        cin >> a[i][j];
    }
    min = a[0][0];
    int g = 0;
    int h = 0;
    for (int i = 1; i< n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (a[i][j] < min)
                {
                    g = i;
                    h = j;
                }
        }
    }
    cout << "phan tu nho nhat co toa do la " << "[" << g + 1<< ";" << h + 1 << "]" <<endl;
    int16_t tong = 0;
    for (int i = 1; i< n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tong = tong + a[i][j];
        }
    }
    cout << "tong la " << tong <<endl;
    cout << "tong cac dong la " << n * m;
    return 0;
}