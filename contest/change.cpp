#include <iostream>
using namespace std;
int main()
{
    uint64_t n, count, i;
    cin >> n;
    uint64_t tien[]= {100, 20, 10, 5};
    count = 0;
    for (i = 0; i < 4; i++)
    {
        while (tien[i] <= n)
        {
            n = n - tien[i];
            count++;
        }
    }
    count = count + n;
    cout << count;
}