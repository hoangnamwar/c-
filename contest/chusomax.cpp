#include <iostream>
using namespace std;
 
int main()
{
    uint64_t max, n, x;
    cin >> n;
    max = n % 10;
    while (n != 0)
    {
        x = n % 10;
        if (max < x)
            max = x;
        n = n / 10;
    }
    cout << max;
    return 0;
}