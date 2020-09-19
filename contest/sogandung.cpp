#include <iostream>
using namespace std;
int main()
{
    uint64_t n, i;
    cin >> n;
    bool test = false;
    uint64_t smm[] = {4, 7, 47, 74, 44, 77, 444, 447, 474, 744, 477, 747, 774, 777};
    for ( i = 0; i < 14; i++)
    {
        if ( n % smm[i] == 0)
        {
            test = true;
            break;
        }
    }
    if (test == true)
        cout << "YES";
    else 
        cout << "NO";
}