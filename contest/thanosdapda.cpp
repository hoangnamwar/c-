#include <iostream>
using namespace std;

int main()
{
    int so_da;
    cin >> so_da;
    string mau2(so_da);
    for (int i = 0; i < so_da; i++)
    {
        cin >> mau2[i];
    }
    string da1(6);
        da[1] = "Power";
        da[2] = "Time";
        da[3] = "Space";
        da[4] = "Soul";
        da[5] = "Reality";
        da[6] = "Mind";
    string mau1(6);
        mau1[1] = "purple";
        mau1[2] = "green";
        mau1[3] = "blue";
        mau1[4] = "orange";
        mau1[5] = "red";
        mau1[6] = "yellow";
    cout << 6 - so_da << endl;
    for (int i = 0; i < 6; i++)
    {
        int dem = mau2.find(mau1[i]);
        if (dem != -1)
            break;
        else
        {
            cout << da1[i] << endl;
        }   
    }
    return 0;
}