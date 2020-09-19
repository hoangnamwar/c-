#include <iostream>
using namespace std;
 
int main()
{
    int A[1001];
    int B[1001];
    int n, i, j, so_thug_day, so_thug_het, so_thug_voi, so_thung, max, values, Tong, Clai, Them;
    
    cout << "Nhap so thung hoa chat " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Suc chua thung thu " << i << " la: " << endl;
        cin >> A[i];
        cout << "So luong con lai la: " << endl;
        cin >> B[i];
    }

    for (i = 1; i <= n; i++)
    {
        if (A[i] == B[i])
            so_thug_day++;
        if (B[i] == 0)
            so_thug_het++;
    }
    so_thug_voi = n - so_thug_day - so_thug_het;
    cout << "So thung day la " << so_thug_day << endl;
    cout << "So thung voi la " << so_thug_voi << endl;
    cout << "So thung het la " << so_thug_het << endl;

    for (i = 1; i <= n; i++)
    {
        Tong = Tong + A[i];
    }
    for (i = 1; i <= n; i++)
    {
        Clai = Clai + B[i];
    }
    Them = Tong - Clai;
    cout << "So dung dich can do them la " << Them << endl;

    while (Them > 0)
    {
        max = A[1];
        for (i = 1; i <= n; i++)
        {
            if (max < A[i])
            {
                max = A[i];
                values = i;
            }
        }
        Them = Them - max;
        so_thung++;
        n = n - 1;
        for(j = values; j <= n; j++)
        {
            A[j] = A[j + 1];
        }
    }
    cout << "So thung it nhat can phai mang ra nha may la " << so_thung;
}