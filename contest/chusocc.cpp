#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    uint64_t t, i, j, a, b, x;
    cin >> t;
    uint64_t day[2][t];
    for (j = 0; j < t; j++)
    {
        for (i = 0; i < 2; i++)
        {
            cin >> day[i][j];
        }
    }
        for (j = 0; j < t; j++)
        {
            a = day[0][j] % 10;
            if (day[1][j] != 0)
            {
                b = day[1][j] % 4;
                switch (a)
                {
                    case 6:
                    case 5:
                    case 1:
                    case 0:
                    {
                        cout << a;
                        break;
                    }
                    case 9:
                    case 7:
                    case 3:
                    {
                        x = pow(a, b);
                        cout << x % 10;
                        break;
                    }
                    case 2:
                    case 4:
                    case 8:
                    {
                        switch (b)
                        {
                            case 0:
                            {   
                                cout << 6;
                                break;
                            }
                            
                            default:
                            { 
                                x = pow(a, b);
                                cout << x % 10;
                                break;
                            }
                        }
                    }
                }
            cout << endl;
            }
            else
                cout << 1 << endl;
        }
    return 0;
}