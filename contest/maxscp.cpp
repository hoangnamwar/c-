#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    uint64_t n, m;
    cin >> n;
    m = uint64_t(n);
    if (m * m > n)
        m = m - 1;
    cout << m*m;
    return 0;
}