#include <iostream>
using namespace std;

int main()
{
    uint64_t n, x, i, dem, min, k;
    cin >> n >> x;
    if  (n > x)
        min = x;
    else
        min = n;
    dem = 0;
    for (i = 1; i <= min; i++)
    {
        if (x % i == 0)
        {
            k = x / i;
            if (k <= min)
                dem = dem + 1;
        }
    }
    cout << dem  << endl;
    return 0;
}