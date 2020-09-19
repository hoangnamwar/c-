#include <iostream>
#include <cmath>
using namespace std;

bool snt(uint64_t x)
{
    bool test;
        test = true;
        uint64_t i;
        if (x != 2) 
        {   for (i = 2; i <= uint64_t(sqrt(x) + 1); i++)
            {
                if (x % i == 0) 
                {
                    test = false; 
                    break;
                } 
            }
        }
    if (x == 1)
        test = false;
    return test;
}

int main()
{
    uint64_t n, dem, j;
    cin >> n;
    j = 1; dem = 2;
    while (j != n)
    {
        dem++;
        if (snt(dem) == true)
            j = j + 1;
    }
    cout << dem;
    return 0;
}