#include <iostream>
using namespace std;

int main()
{
    uint64_t a, b, c;
    cin >> a >> b >> c;
    bool test = true;
    if ((a <= b) && (b <= c) && (test))
    {
        cout << b;
        test = false;
    }
    if ((c <= b) && (b <= a) && (test))
    {
        cout << b;
        test = false;
    }
    if ((b <= a) && (a <= c) && (test))
    {
        cout << a;
        test = false;
    }
    if ((c <= a) && (a <= b) && (test))
    {
        cout << a;
        test = false;
    }
    if ((a <= c) && (c <= b) && (test))
    {
        cout << c;
        test = false;
    }
    if ((b <= c) && (c <= a) && (test))
    {
        cout << c;
        test = false;
    }
    return 0;

}