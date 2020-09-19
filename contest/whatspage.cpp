#include <iostream>
using namespace std;

int main()
{
    int64_t k, p, n, i, dau, cuoi;
    cin >> n >> p >> k;
    if ( (p - k) > 1 )
    {
        cout << "<< ";
        for ( i = (p - k); i < p; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        for ( i = 1; i < p; i++)
        {
            cout << i << " ";
        }   
    }

    cout << "(" << p << ") ";

    if ( (p + k) < n )
    {
        for ( i = (p + 1); i <= (p + k); i++)
        {
            cout << i << " ";
        }
        cout << ">>";
    }
    else
    {
        for ( i = (p + 1); i <= n; i++)
        {
            cout << i << " ";
        }
    }
}