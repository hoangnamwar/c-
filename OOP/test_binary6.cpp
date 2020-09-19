#include <iostream>
#include <fstream>
#define FILE_NAME "test_binary6.dat"

using namespace std;

class School
    {
        private: 
            int stuNo;
            int stuId[10];
        public:
            void readData()
            {
                cout << "Nhap so sinh vien: ";
                cin >> stuNo;
                for (int i=0; i<stuNo; i++)
                {
                    cout << "Nhap ma sv thu " << i+1 << " ";
                    cin >> stuId[i];
                }
            }
            int getStuNo()
            {
                return stuNo;
            }
            int getStuId(int i)
            {
                return stuId[i];
            }
    };

class Student: public School
{
    private:
        int sId;
        char sName[100];
    public:
        int setId(int Id)
        {
            sId = Id;
        }
        void readName(int i)
        {
            if (i == 0)
                cin.ignore();
            cout << "Nhap ten sv " << sId << ": ";
            cin.getline(sName,100);
        }
        void dplayName()
        {
            cout << sId << ": " << sName << endl;
        }
};

int main()
{
    Student Stu[10];
    School Sch;
    fstream file;


    Sch.readData();
    for (int i=0; i<Sch.getStuNo(); i++)
    {
        Stu[i].setId(Sch.getStuId(i));
        Stu[i].readName(i);
    }
    
    file.open(FILE_NAME, ios::out|ios::binary);
    file.write((char*) &Sch, sizeof(Sch));
    for(int i=0; i<Sch.getStuNo(); i++)
    {
        file.write((char*) &Stu[i], sizeof(Stu));
    }
    file.close();



    file.open(FILE_NAME, ios::in|ios::binary);
    file.read((char*) &Sch, sizeof(Sch));
    cout << "------------------------" << endl;
    // cout << Sch.getStuNo() << endl;
    // for(int i=0; i<Sch.getStuNo(); i++)
    // {
    //     cout << Sch.getStuId(i) << endl;
    // }
    // cout << "------------------------" << endl;
    for(int i=0; i<Sch.getStuNo(); i++)
    {
        file.read((char*) &Stu[i], sizeof(Stu));
    }
    for(int i=0; i<Sch.getStuNo(); i++)
    {
        Stu[i].dplayName();
    }
    file.close();

}
