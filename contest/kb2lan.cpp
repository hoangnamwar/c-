#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 1; i < x; i++)
    {
        char x[2];
        for  (int j = 0; j < 2; j++)
        {           
            cin >> x[j];
        }
        cout << x;
    }
    return 0;
}