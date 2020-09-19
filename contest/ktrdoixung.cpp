#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string x, n;
    cin >> x;
    n = x;
    reverse(n.begin(), n.end());
    if ( x.compare(n) == 0)
        cout << 1;
    else 
        cout << 0;
    return 0;
}