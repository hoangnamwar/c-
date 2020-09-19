#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int64_t x, i, j, dau, duoi;
    string n, m;
    getline( cin, n);
    getline( cin, m);
    int64_t a[6];
    for (i = 0; i < 6; i++)
    {
        a[i] = 0;
    }
    int64_t k = -1;
    
    for (i = 0; i < n.length(); i++)
    {
        if (i % 5 == 0)
        {
            dau = i;
            duoi = i + 1;
            k = k + 1;
            for (j = dau; j <= duoi; j++)
            {
                x = int(n[j]) - 48;
                a[k] = x * pow(10 , duoi - j) + a[k];
            }
        }
    }
    for (i = 0; i < n.length(); i++)
    {
        if (i % 5 == 0)
        {
            dau = i;
            duoi = i + 1;
            k = k + 1;
            for (j = dau; j <= duoi; j++)
            {
                x = int(m[j]) - 48;
                a[k] = x * pow(10 , duoi - j) + a[k];
            }
        }
    }
    if (  (a[0] <= a[3]) && ( a[3] <= 24)
        && (a[1] <= 60) && (a[4] <= 60)
        && (a[2] <= 60) && (a[5] <= 60)  
        && (0 <= a[0]) && (0 <= a[1])
        && (0 <= a[2]) && (0 <= a[3])
        && (0 <= a[4]) && (0 <= a[5])   )
    {
        uint64_t firsttime = a[0] * 3600 + a[1] * 60 + a[2];
        uint64_t secondtime = a[3] * 3600 + a[4] * 60 + a[5];
        uint64_t time = secondtime - firsttime;
        if (time / 3600 > 0)
            cout << time / 3600 << "h "; 
        time = time % 3600;
        if (time / 60 > 0)
            cout << time / 60 << "' ";
        time = time % 60;
        if (time > 0)
            cout << time << "s";
    }
    else 
    {
        cout << "No";
    }
    return 0;
}