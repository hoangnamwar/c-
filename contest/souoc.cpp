#include <iostream>
using namespace std;

int main()
{
    uint64_t dem, n, i;
    cin >> n;
    dem = 0;
    for (i = 1; i <= (n / 2 + 1); i++)
    {
        if (n % i == 0)
            dem++;
    }
    cout << dem;
    return 0;
}