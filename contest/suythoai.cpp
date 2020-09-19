#include <iostream>
using namespace std;

int main()
{
    int t, i, j;
    cin >> t;
    uint64_t day[3][t];
    uint64_t a, b, c;
    bool test;
    for (j = 0; j < t; j++)
    {
        for (i = 0; i < 3; i++)
        {
            cin >> day[i][j];
        }
    }

    for (i = 0; i < t; i++)
    {
        a = day[0][i];
        b = day[1][i];
        c = day[2][i];
        cout << "Case " << i + 1 << ": ";
        test = true;
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
        cout << endl;
    }
    return 0;
}