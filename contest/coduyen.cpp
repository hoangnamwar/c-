#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string x, y;
    uint64_t sum1, sum2, i;
    cin >> x >> y;
    sum1 = 0;
    sum2 = 0;
    for (i = 0; i < x.length(); i++)
    {
        if (int(x[i]) < 91)
            sum1 = sum1 + pow(int(x[i] - 64), (i + 1));
        else
        {
            sum1 = sum1 + pow(int(x[i] - 96), (i + 1));
        }
        
    }
    sum1 = sum1 % 10;
    for (i = 0; i < y.length(); i++)
    {
        if (int(y[i]) < 91)
            sum2 = sum2 + pow(int(y[i] - 64), (i + 1));
        else
        {
            sum2 = sum2 + pow(int(y[i] - 96), (i + 1));
        }
        
    }
    sum2 = sum2 % 10;
    if (sum1 == 0)
        sum1 = 10;
    if (sum2 == 0)
        sum2 = 10;
    cout << sum1 + sum2;
}