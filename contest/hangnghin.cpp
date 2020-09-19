#include <iostream>
using namespace std;

int main()
{
    uint64_t n, x;
    bool test = true;

    cin >> n;
    test = true;
    if (n < 100)
    {
        cout << "00";
        test = false;
    }
    if ((n < 1000) && (test == true))
    {
        x = n / 100;
        test = false;
        cout << "0" << x;
    }
    if (test == true)
    {
        n = n / 100;
        x = n % 100;
        cout << x;
    }
}