#include <iostream>
using namespace std;

bool checkYear(uint64_t year) 
{ 
    return (((year % 4 == 0) && (year % 100 != 0)) || 
        (year % 400 == 0)); 
} 

int main()
{
    uint64_t n, m, i, an, thang, dau;
    cin >> n >> m;
    int ngay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if ( checkYear(m) == true )
        ngay[1] = 29;
    // for (i = 0; i < 12; i++)
    // {
    //     cout << ngay[i] << " ";
    // }
    an = 7 - n;
    thang = 0;
    for (thang = 0; thang < 12; thang++)
    {
        switch (thang + 1)
        {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
        }
        cout << endl;
        cout << endl;
        cout << "T2\tT3\tT4\tT5\tT6\tT7\tCN" << endl;
        dau = 7 - an;
        if (dau != 7)
            for (i = 0; i < dau; i++)
            {
                // cout << "    ";
                cout << "\t";
            }
        for (i = 1; i <= ngay[thang]; i++)
        {
            if (i < 10)
                // cout << i << "   ";
                cout << i << "\t";
            else 
                // cout << i << "  ";
                cout << i << "\t";
            if ( ((dau + i) % 7 == 0) && (i != ngay[thang]) )
                cout << endl;
        }
        an = (dau + ngay[thang]) % 7;
        cout << endl;
        cout << endl;
    }
    
}