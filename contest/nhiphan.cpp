#include <iostream>
using namespace std;
int main()
{
    uint64_t n, i, j, du, h;
    cin >> h;
    uint64_t day[h];
    string str="";
    for (i = 0; i < h; i++)
    {
        cin >> day[i];
    }
    for (i = 0; i < h; i++)
    {
        str = "";
        n = day[i];
        while (n != 0)
        {
            if (n % 2 == 0)
                str.push_back('0');
            else 
                str.push_back('1');
            n = n / 2;
        }
        
        du = str.length();
        if (du % 4 != 0)
        {
            du = 4 - (du % 4);
            for (j = 0; j < du; j++)
                {
                    str.push_back('0');
                }
        }
        
        for(j = 0; j < str.length(); j++ )
        {
            if ((j % 4 == 0) & (j != 0))
                cout << " ";
            cout << str[str.length() - j - 1];
        }
        cout << endl;
    }
}