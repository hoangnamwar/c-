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
    
    // -------   Dong dau   --------
    
    duoi = -4;
    for (i = 1; i < n.length(); i++)
    {
        if (    (a[i - 1] == ' ')
            &&  (a[i] == ':')
            &&  (a[i + 1] == ' ')   )
        {
            dau = duoi + 4;
            duoi = i - 2;
            k = k + 1;
            for (j = dau; j <= duoi; j++)
            {
                x = int(n[j]) - 48;
                a[k] = x * pow(10 , duoi - j) + a[k];
            }
        }
    }
    dau = duoi + 4;
    duoi = n.length() - 1;
    k = k + 1;
    for (j = dau; j <= duoi; j++)
            {
                x = int(n[j]) - 48;
                a[k] = x * pow(10 , duoi - j) + a[k];
            }

    // ----------   Dong hai   ----------
    int dem = 0;
    for (i = 1; i < m.length(); i++)
    {
        if (m[i] == ':')
            dem = dem + 1;
    }

    switch (dem)
    {
        case 2:
        {
            duoi = -4;
            k = 2;
            for (i = 1; i < m.length(); i++)
            {
                if (    (a[i - 1] == ' ')
                    &&  (a[i] == ':')
                    &&  (a[i + 1] == ' ')   )
                {
                    dau = duoi + 4;
                    duoi = i - 2;
                    k = k + 1;
                    for (j = dau; j <= duoi; j++)
                    {
                        x = int(m[j]) - 48;
                        a[k] = x * pow(10 , duoi - j) + a[k];
                    }
                }
            }
            dau = duoi + 4;
            duoi = m.length() - 1;
            k = k + 1;
            for (j = dau; j <= duoi; j++)
            {
                x = int(m[j]) - 48;
                a[k] = x * pow(10 , duoi - j) + a[k];
            }
            break;
        }
    
        case 1:
        {
            duoi = -4;
            k = 3;
            for (i = 1; i < m.length(); i++)
            {
                if (    (a[i - 1] == ' ')
                    &&  (a[i] == ':')
                    &&  (a[i + 1] == ' ')   )
                {
                    dau = duoi + 4;
                    duoi = i - 2;
                    k = k + 1;
                    for (j = dau; j <= duoi; j++)
                    {
                        x = int(m[j]) - 48;
                        a[k] = x * pow(10 , duoi - j) + a[k];
                    }
                }
            }
            dau = duoi + 4;
            duoi = m.length() - 1;
            k = k + 1;
            for (j = dau; j <= duoi; j++)
            {
                x = int(m[j]) - 48;
                a[k] = x * pow(10 , duoi - j) + a[k];
            }

            break;
        }

        default :
        {
            duoi = m.length() - 1;
            for (j = 0; j <= duoi ; j++)
                {
                    x = int(m[j]) - 48;
                    a[5] = x * pow(10 , duoi - j) + a[5];   
                }
            break;
        }
    }
    
    //  -----------   Tinh time   ----------
    uint64_t firsttime = a[0] * 3600 + a[1] * 60 + a[2];
    uint64_t secondtime = a[3] * 3600 + a[4] * 60 + a[5];
    uint64_t time = secondtime + firsttime;
    if (time / 3600 > 0)
        cout << time / 3600 << "h "; 
    time = time % 3600;
    if (time / 60 > 0)
        cout << time / 60 << "' ";
    time = time % 60;
    if (time > 0)
        cout << time << "s";
    
    return 0;
}