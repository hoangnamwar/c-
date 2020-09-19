#include <iostream>
using namespace std;
int main()
{
    int n, x , y, t;
    cin >> n;
    if (n == 1)
        cout << "0" << endl;
    if (n == 2)
        cout << "0 1" << endl;
    if  (n == 3)
        cout << "0 1 1" << endl;
    if (n > 3)
        {
            cout << "0 1 1 ";
            x = 1; 
            y = 1;
            for  (int j = 4; j <= n; j++)
            {
                cout << x + y << " ";
                t = y;
                y = x + y;
                x = t;
            }
        cout << endl;
        }
    return 0;
}