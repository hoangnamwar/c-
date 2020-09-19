#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int gan;
    string chuoi = "";
    gan = 0;
    while (gan != 12)
    {
        getline(cin, chuoi);
        gan = 0;
        if (chuoi == "CU")
            gan = 1;
        if (chuoi == ":-)")
            gan = 2;
        if (chuoi == ":-(")
            gan = 3;
        if (chuoi == ";-)")
            gan = 4;
        if (chuoi == ":-P")
            gan = 5;
        if (chuoi == "(.)")
            gan = 6;
        if (chuoi == "TA")
            gan = 7;
        if (chuoi == "CCC")
            gan = 8;
        if (chuoi == "CUZ")
            gan = 9;
        if (chuoi == "TY")
            gan = 10;
        if (chuoi == "YW")
            gan = 11;
        if (chuoi == "TTYL")
            gan = 12;
        // if (chuoi == )
        //     gan = ;
        // if (chuoi == )
        //     gan = ;
        switch (gan)
        {
            case 1:
            {
                cout << "see you" << endl;
                break;
            }
            case 2:
            {
                cout << "I_am_happy" << endl;
                break;
            }
            case 3:
            {
                cout << "I_am_unhappy" << endl;
                break;
            }
            case 4:
            {
                cout << "wink" << endl;
                break;
            }
            case 5:
            {
                cout << "stick_out_my_tongue" << endl;
                break;
            }
            case 6:
            {
                cout << "sleepy" << endl;
                break;
            }
            case 7:
            {
                cout << "totally_awesome" << endl;
                break;
            }
            case 8:
            {
                cout << "Canadian_Computing_Competition" << endl;
                break;
            }
            case 9:
            {
                cout << "because" << endl;
                break;
            }
            case 10:
            {
                cout << "thank_you" << endl;
                break;
            }
            case 11:
            {
                cout << "you_are_welcome" << endl;
                break;
            }
            case 12:
            {
                cout << "talk_to_you_later" << endl;
                break;
            }
            default:
            {
                cout << chuoi << endl;
                break;
            }
        }
    }
}