#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int16_t n, y, i;
    cin >> n;
    uint64_t a, b, x, uoc, j, kq[n];
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        uoc = a / b;
        b = b % 10;
        kq[i] = 0;
        x = uoc / 10;
        y = uoc % 10;
        for ( j = 1; j <= 9; j++)
        {
            kq[i] = kq[i] + (b * j) % 10;
        }
        kq[i] = kq[i] * x;
        for ( j = 1; j <= y; y++)
        {
            kq[i] = kq[i] + (b * j) % 10;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << kq[i] << endl;
    }
    return 0;
}