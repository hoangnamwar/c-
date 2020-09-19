#include <iostream>
#include <fstream>
#define FILE_NAME "test_binary4.dat"
using namespace std;

class Student
{
    private:
        int     stuID[100];
        int     claID[100];
        int     stuNO;
        int     claNO;
        struct      __stu       //stuNO
                    {
                        int     _s_stuID;
                        char    _s_stuNAME[100];       
                    };
        struct      __cla       //claNO
                    {
                        int     _c_claID;
                        char    _c_claNAME[100]; 
                    };
        struct      __stu_cla   //claNO
                    {
                        int     _limit;
                        int     _sc_stuID[100];
                        char    _sc_claID;
                    };
    public:
        void setStuNo()
        {
            cout << "Nhap so hoc sinh: " << endl;
            cin >> stuNO;
        }
        void setClaNo()
        {
            cout << "Nhap so lop: " <<  endl;
            cin >> claNO;
            cout << "Nhap so thanh vien: " << endl;
        }
        int getStuNo()
        {
            return stuNO;
        }
        int getClaNO()
        {
            return claNO;
        }

        void readStudent()
        {
            __stu _stu[stuNO];
            __cla _cla[claNO];
            __stu_cla _stu_cla[claNO];
            cout << "-----------STUDENT-----------" << endl;
            for (int i = 0; i < stuNO; i++)
            {
                cout << "Nhap ma hoc sinh " << i << " " << endl;
                cin >> stuID[i];
                _stu[i]._s_stuID = stuID[i];
                cin.ignore();
                cout << "Nhap ten hoc sinh " << i << " " << endl;
                cin.getline(_stu[i]._s_stuNAME, 100);
            }

            for (int i=0; i<claNO; i++)
            {
                cout << "Nhap ten lop " << i << " " << endl;
                cin >> claID[i] ;
                _cla[i]._c_claID = claID[i];
                cin.ignore();
                cout << "Nhap ten lop " << i << " " << endl;
                cin.getline(_cla[i]._c_claNAME, 100);
            }

            for (int i=0; i<claNO; i++)
            {
                cout << "Nhap gioi han lop: " << i << " ";
                cin >> _stu_cla[i]._limit;
                for (int j=0; j++; j< _stu_cla[i]._limit)
                {
                    cout << "Nhap ma hoc sinh thu " << j << " cua lop: " << endl;
                    cin >> _stu_cla[i]._sc_stuID[j];
                }

            }
        }

        void displayStudent()
        {
            cout << "-----------ma hoc sinh va ten hoc sinh----------- " << endl;
            for (int i=0; i<stuNO;i++)
            {
                cout << _stu[i]._s_stuID << endl;
            }
        }      
};

int main()
{
    Student Stu;
    fstream file;

    // file.open(FILE_NAME, ios::out|ios::binary);
    // Stu.readStudent();
    // file.write((char*)&Stu, sizeof(Stu));
    // file.close();

    file.open(FILE_NAME,ios::in|ios::binary);
    file.read((char*)&Stu, sizeof(Stu));
    cout << endl;
    Stu.displayStudent();
    file.close();

}