#include <iostream>
using namespace std;

int main()
{
    uint64_t n, m, i, j, an;
    cin >> n >> m;
    uint64_t day[n];
    for ( i = 0; i < n ; i++)
    {
        cin >> day[i];
    }
    for ( i = 0; i < n - 1 ; i++)
    {
        if (day[i] % 2 == m)
        {
           for ( j = i + 1; j < n ; j++)
           {
               if ( (day[j] % 2 == m) && (day[i] > day[j]) )
               {
                   an = day[i];
                   day[i] = day[j];
                   day[j] = an;
               }
           }
        }
    }
    for ( i = 0; i < n ; i++)
    {
        cout << day[i] << " ";
    }
    return 0;
}