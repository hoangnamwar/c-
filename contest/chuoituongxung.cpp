#include <iostream>
#include <cstring>
using namespace std;    

int main()
{
    int64_t m, n, p, i, j, k;
    cin >> m >> n;
    char s[m];
    char t[n];
    cin >> s;
    cin >> t;
    p = m;
    bool test = false;
    for (i = 0; i < m; i++)
    {
        if (s[i] = '*') 
        {   
            p = i;
            break;
        }
    }
    if ((p == m) && (m == n))
    {
        if (strcmp(s, t) == 0)
        {    
            test = true;
        }
    }
    k = n - m;
    if (k > 0)
    {
        if  (p != m)
        {
            for (j = 0; j < p; j++)
            {
                if (s[j] != t[j])
                {
                    test = false;
                    break;
                }
                else 
                    test = true;
            }
            if (test == true)
            {
                for (j = p + 1; j < m; j++ )
                {
                    if (s[j] != t[j + k])
                    {
                        test = false;
                        break;
                    }
                    else 
                        test = true;
                }
            }
        }
    } 
    if (k == -1)
    {
        if  (p != m)
        {
            for (j = 0; j < p; j++)
            {
                if (s[j] != t[j])
                {
                    test = false;
                    break;
                }
                else 
                    test = true;
            }
            if (test == true)
            {
                for (j = p ; j < n; j++ )
                {
                    if (s[j + 1] != t[j])
                    {
                        test = false;
                        break;
                    }
                    else 
                        test = true;
                }
            }
        }
    }
    if (k < -1)
        test = false;
    if (test == false) 
        cout << "NO";
    else
        cout << "YES";
    return 0;

}