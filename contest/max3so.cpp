#include <iostream>
using namespace std;

int main()
{
    uint64_t a, b, c, max;
    cin >> a;
    cin >> b;
    cin >> c;
    max = a;
    if (max < b)
        max = b;
    if (max < c)
        (max = c);
    cout << max << endl;
    return 0;
}