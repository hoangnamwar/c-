#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int sobai, sokitu, sodong;
    string day;
    float tong;
    cin >> sobai;
    float kq[sobai];
    for (int i = 1; i <= sobai; i++)
    {   
        tong = 0;
        cin >> sokitu;
        char kitu[1];
        float gia[sokitu];
        for  (int j = 0; j < sokitu; j++)
        {           
            cin >> kitu[j];
            cin >> gia[j];
        }
        cin >> sodong;
        for (int t = 0; t <= sodong; t++)
        {
            getline(cin,day);
            for (int k = 0; k < day.length(); k++)
            {
                for (int j = 0; j < sokitu; j++)
                {
                    if (day[k] == kitu[j])
                        tong = tong + gia[j];
                }
            }
            day.clear();
        }
        kq[i] = tong;
    }
    for (int i = 1; i <= sobai; i++)
    {
        cout << setprecision(2) << fixed << kq[i] / 100 << "$" << endl;
    }
    return 0;