#include <iostream>
using namespace std;
/* y tuong: xu ly tung hang mot tim xem chu 'B' dau va 'B' cuoi cua hang neu khong co thi tim tiep
            neu thay thi se break ra khoi viec test tren va tu toa do cua diem 'B' dau se tim doc theo hang 
            doc den diem 'W' thi toa do diem 'B' cuoi se dung trc diem 'W' hoac la diem 'B' do la diem cuoi
            cung thi ta se co toa do 3 diem va se tinh dc tam cua hinh cn mau den.
    vd      
            W W W W W W W W W W W W W W
            W W W B(dau)B B B B(cuoi  W
                  B             cua
                  B             hang)             //de bai ko nhap thu ntn, minh nhap thua cho de nhin thoi
                  B
                  B                      
                  B(CUOI)     B

                //B(CUOI) khong han la cuoi ma minh chi goi cho de hieu thoi,
                          no la 'B' cuoi minh can tim

            toa do       B(dau)                 (a, b)
                         B(cuoi cua hang)       (a, c)
                         B(CUOI)                (d, b)
*/
int main()
{
    int a, b, c ,d, x, y;
    bool testh = false, testc = false, ok = false;
    cin >> x >> y;
    for (int i = 1; i <= x ; i++)
    {
        char foo[y] ;                       //Nhap vao roi xu ly tung hang mot
        cin >> foo;
        if (ok != true)
        {
            if (testc == false)                  
            {    
                for (int j = 0; j < y; j++)     //tim diem 'B' dau
                {
                    if (foo[j] == 'B')
                    {
                        a = i;
                        b = j + 1;
                        testh = true;
                        break;
                    }
                }
                if (testh == true)              //tim diem b cuoi cua hang do
                {
                    
                    for (int j = 0; j < y; j++)
                    {
                        if (foo[y - 1 -j] == 'B')
                        {
                            c = y - j;
                            testc = true;   
                            d = a;    
                            break;              
                        }
                    }
                }
            }
            else                                //tim 'B'cuoi
            {
                if (foo[b] == 'W')
                {  
                    d = i - 1;
                    ok = true;
                }
                if ((foo[b] == 'B') && (i == x))
                {    
                    d = i;
                    ok = true;
                }
            }
        }
    }
    cout << ( a + d)  / 2                   //tinh tam
    << " " 
    << ( b + c) / 2 << endl;
    return 0;
}