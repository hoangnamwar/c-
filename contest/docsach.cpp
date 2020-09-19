#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int16_t n, i;
    cin >> n;
    uint64_t a, b, uoc, j, kq[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        uoc = a / b;
        b = b % 10;
        kq[i] = 0;
        for (int j = 1; j <= uoc; j++)
        {
            kq[i] = ((j % 10) * b) % 10 + kq[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << kq[i] << endl;
    }
}