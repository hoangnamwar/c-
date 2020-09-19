#include <iostream>
#include <cmath>
using namespace std;

bool snt(uint64_t x)
{
    if (x < 2)    
        return false;
    for (uint64_t i = 2; i <= sqrt((float)x); i ++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    uint64_t n;
    cin >> n;
    bool test = true;
    while (n != 0)
    {
        if (snt(n) == false)
        {
            test = false;
            break;
        }
        n = n / 10;
    }
    cout << test;
}