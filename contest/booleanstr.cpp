#include <iostream>
using namespace std;

int main()
{
    string day;
    uint64_t  i, n;
    n = 0;
    bool kq;
    cin >> day;
    for ( i = 1; i < day.length(); i++)
    {
        if (day[i] == 'n')
        {
            n = n + 1;
        }
    }
    if (day[ day.length() - 2] == 'u')
        if (n % 2 == 0)
            kq = true;
        else 
            kq = false;
    else 
        if (n % 2 == 0)
            kq = false;
        else 
            kq = true;
    if ( kq  == true)
        cout << "True";
    if (kq  == false)
        cout << "False";
    return 0;

}