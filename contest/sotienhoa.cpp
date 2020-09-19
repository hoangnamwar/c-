#include <iostream>
using namespace std;

int main()
{
    uint64_t n, s;
    cin >> n;
    s = 0;
    while ( n!= 0)
    {
        s = s + n;
        n = n / 10;
    }
    cout << s;
}