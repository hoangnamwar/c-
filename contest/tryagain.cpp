#include <iostream>
#include <cmath>
using namespace std;

bool dx(uint64_t x)
{
    int chuso[6];
    int k = -1;
    while (x != 0)
    {
        k = k + 1;
        chuso[k] = x % 10;
        x = x / 10;
    }
    for (int  i = 0; i < k; i++)
    {
        if (chuso[i] != chuso[k - i])
        {
            return false;
            break;
        }
    }
    return true;
}

bool snt(uint64_t x)
{
    if (x < 2)    
        return false;
    for (uint64_t i = 2; i <= sqrt((float)x); i ++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int64_t n, so, count;
    cin >> n;
    count = 0;
    while (count != n)
    {
        cin >> so;
        if (so > 1)
        {
            if (    (dx(so) == true) & (snt(so) == true)   )
            {
                cout << so;
                count++;
            }   
            else 
                cout << "Try Again";
            
        }
        else 
            cout << "Try Again";
    }
}