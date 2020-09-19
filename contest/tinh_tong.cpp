#include <iostream>
using namespace std;

int main()
{
    int i, n, j;
    float S = 1;
    float x, t, m, k;
    cout << "Nhap x " << endl;
    cin >> x;
    cout << "Nhap n " << endl;
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            k = 1;
        else 
            k = -1; 

        m = 2 * i;

        t = 1;
        for( j = 1; j <= m; j++)
        {
            t = t * x;
        }

        S = S + (k * t) / m;
    }
    cout << S << endl;
}
