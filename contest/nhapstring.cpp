#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int string[a][b];
    for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j ++)
            {
                cin >> string[i][j];
            }
        }
    for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j ++)
                {
                    cout << string[i][j] << "  ";
                }
            cout << endl;
        }
    return 0;
}