#include <iostream>
using namespace std;

bool check(int16_t x)
{
    int16_t sum = 0;
    for (int16_t i = 1; i <= x/2 ; i++)
    {
        if (x % i == 0)
            sum = sum + i;
    }
    if (sum == x) return true;
    else return false;
}

int main()
{
    int16_t n;
    cin >> n;
    for (int16_t j= 0; j < n; j++)
    {
        if (check(n - j) == true)
        {
            cout << n - j;
            break;
        }
    }
}