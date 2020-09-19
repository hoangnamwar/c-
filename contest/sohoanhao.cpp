#include <iostream>
using namespace std;
int main()
{
    uint64_t x, s, i;
    cin >> x; s = 0;
    for  ( i = 1; i < (x / 2 + 2); i++)
        {
            if (x % i == 0)
                s = s + i; 
        }
    if (s == x)
        cout << 1;
    else
        cout << 0;
    return 0;
}
