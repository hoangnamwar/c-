#include <iostream>
using namespace std;
int main()
{
    uint64_t a, b, c, i, j, t, n;
    cin >> n;
    uint64_t square[n][n];
    for ( j = 0; j < n ; j++)
    {
        for ( i = 0; i < n ; i++)
        {
            cin >> square[i][j];
        }
    }
    c = 1;
    for ( j = 0; j < n ; j++)
    {
        c = c * square[j][j];
    }    
    cout << c << endl;
    b = 1;
    for ( j = 1; j < n ; j++)
    {
        for ( i = j; i < n; i++ )
        {
            b = b * square[i][i - j];
            // cout << square[i][i - j] << endl;
        }
    }  
    cout << b; 
    a = 0;
    for ( i = 1; i < n ; i++)
    {
        for ( j = i; j < n; j++ )
        {
            a = a + square[j - i][j];
            cout << square[j - i][j] << endl;
        }
    } 
    cout << a; 
}