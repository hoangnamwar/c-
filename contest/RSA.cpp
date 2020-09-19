#include <iostream>
using namespace std;
int main()
{
    uint64_t dau, cuoi, dem, count, i, j;
    cin >> dau >> cuoi;
    count = 0;
    for (i = dau; i <= cuoi; i++)
    {
        dem = 0;
        for (j = 2; j <= uint64_t(i / 2); j++)
        {
            if (i % j == 0)
                dem = dem + 1;
        }
        if (dem == 2)
            count++;
    }
    cout << count;
}