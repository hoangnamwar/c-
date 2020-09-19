#include <iostream>
using namespace std;

int main()
{
    uint64_t x, y, s, n;
    s = 0;
    cin >> x; y = x;
    while (x != 0)
    {
        n = x % 10;
        s = s + n*n*n;
        x = x / 10;
    }
    if (s == y)
        cout << 1;
    else 
        cout <<0;
}