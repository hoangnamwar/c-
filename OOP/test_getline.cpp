#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    /* getline dung de nhap cac ki tu tren mot dong, 
        hay con dung de loai bo ky tu thua tren mot dong
        va xuong dong

    Vi du 
        --(55afhsiaofjasp)
        fin >> n;
        fin.getline(temp,100)
        --> n = 55; temp = afhs..;
    */
    int n;
    fstream fin("danhba2.txt");
    fin >> n;
    char temp[100];
    fin.getline(temp,100);
    cout << "n: " << n << endl;
    for (int i = 0; i < 10 ; i++ )
    {
        cout << "temp: "<< temp[i] << endl;
    }

}