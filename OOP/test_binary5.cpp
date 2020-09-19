#include <iostream>
#include <fstream>
#define FILE_NAME "test_binary5.dat"
using namespace std;

int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    int a[10];
    fstream file;


    // for (int i=0; i<n; i++)
    // {
    //     cout << i << ": " ;
    //     cin >> a[i];
    // }
    // file.open(FILE_NAME, ios::out| ios::binary);
    // for (int i=0; i<n; i++)
    // {
    //     file.write((char*) &a[i], sizeof(int));
    // }
    // file.close();

    
    cout << "-----------------" << endl;
    file.open(FILE_NAME, ios::in| ios::binary);
    for (int i=0; i<n; i++)
    {
        file.read((char*) &a[i], sizeof(int));
    }
    for (int i=0; i<n; i++)
    {
        cout << i << ": " << a[i] << endl;
    }
    file.close();
}