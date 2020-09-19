#include <iostream>
using namespace std;

int main()
{
    uint64_t n, can, chi, i;
    cin >> n ;
    uint64_t day[n];
    for (i = 0; i < n; i++)
    {
        cin >> day[i];
    }
    for (i = 0; i < n; i++)
    {
        can = day[i] % 10;
        chi = day[i] % 12;
        switch (can)
        {
            case 0: {cout << "Tan";break;}         
            case 1: {cout << "Canh";break;}         
            case 2: {cout << "Ky";break;}         
            case 3: {cout << "Mau";break;}         
            case 4: {cout << "Dinh";break;}
            case 5: {cout << "Binh";break;}
            case 6: {cout << "At";break;}
            case 7: {cout << "Giap";break;}
            case 8: {cout << "Quy";break;}         
            case 9: {cout << "Nham";break;}         
        }
        cout << " ";
        switch (chi + 1)
        {
            case 1: {cout << "Ty";break;}
            case 2: {cout << "Suu";break;}
            case 3: {cout << "Dan";break;}
            case 4: {cout << "Mao";break;}
            case 5: {cout << "Thin";break;}
            case 6: {cout << "Ty";break;}
            case 7: {cout << "Ngo";break;}
            case 8: {cout << "Mui";break;}
            case 9: {cout << "Than";break;}
            case 10: {cout << "Dau";break;}
            case 11: {cout << "Tuat";break;}
            case 0: {cout << "Hoi";break;}
        }
        cout << endl;
    }
    return 0;
}