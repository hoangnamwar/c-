#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    uint64_t so_tien, so_do_choi, a;
    cin >> so_do_choi; 
    cin >> so_tien;
    if (so_do_choi >= so_tien)
        cout << (so_tien - 1) / 2 << endl;
    else 
    {
        a = so_do_choi * 2 - 1;
        if (/*(so_do_choi * 2 - 1 )*/ a > so_tien )
        {
            cout << (2 * so_do_choi + 1 - so_tien ) / 2 << endl;
        } 
        else
            if  ((/*so_do_choi * 2 - 1 */ a) == so_tien )
            {
                cout << 1 << endl;
            }
            else 
                cout << 0 << endl;    
    }
    return 0;
}