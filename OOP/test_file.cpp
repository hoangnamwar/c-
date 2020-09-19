#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define MAX 200
string ten[MAX];
string sdt[MAX];
string email[MAX];

int main()
{
    //----------Doc file--------------------------------
        int N = 0;
        fstream fin("test_file.dat", ios::binary);
        fin >> N;
        char temp[100];
        fin.getline(temp, 100);
        for(int i=0;i<N;i++)
        {
            getline(fin,ten[i]);
            getline(fin,sdt[i]);
            getline(fin,email[i]);
        }
        fin.close();
    //----------Ket thuc doc file-----------------------

    for(int i=0;i<N;i++)
    {
        cout << ten[i] << endl;
        cout << sdt[i] << endl;
        cout << email[i] << endl;
    }
    //----------------
    // cout<<"\t\tThem lien he\n";
    // cout<<endl;
    // cout<<"Xim moi nhap ho va ten: ";
    // cin.ignore();//Doc va loai bo ky tu trong bo nho dem
    // getline(cin,ten[N]);//Nhan day ky tu nhap vao cho den khi ket thuc bang dau Enter
    //     cout<<"Xin moi nhap so dien thoai: ";
    // getline(cin,sdt[N]);//Nhan day ky tu nhap vao cho den khi ket thuc bang dau Enter
    //     cout<<"Xin moi nhap dia chi email: ";
    // getline(cin,email[N]);//Nhan day ky tu nhap vao cho den khi ket thuc bang dau Enter
    // N++;//Dem so danh ba

    //----------Tao file va ghi file--------------------
        // ofstream fout("test_file.dat", ios::binary);//Tao file va luu thong tin toi file test_file.txt
        // fout << N << endl;//Ghi va dem so danh ba
        // for ( int i=0 ; i < N ; i++ )
        // {
        //     fout << ten[i] << endl
        //     << sdt[i] << endl 
        //     << email[i] << endl;
        //     //Ghi ten, sdt, mail vao file test_file.txt
        // }
        // fout.close();
    //----------Ket thuc va luu file--------------------
}