#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "trials.h"
#define FILE_NAME "trials.dat"

using namespace std;

int main()
{
    system("clear");
    School          Sch;
    Student         Stu[100];
    Class           Cla[10];
    Student_Class   SC[10];
    fstream         file;
    int             chucnang;

//------------------LUU FILE----------------------------
    // file.open(FILE_NAME, ios::out|ios::binary);
    // file.write((char*) &Sch, sizeof(Sch));
    // for(int i=0; i<Sch.getStuNo(); i++)
    // {
    //     file.write((char*) &Stu[i], sizeof(Stu));
    // }
    // for(int i=0; i<Sch.getClaNo(); i++)
    // {
    //     file.write((char*) &Cla[i], sizeof(Cla));
    // }
    // for(int i=0; i<Sch.getClaNo(); i++)
    // {
    //     file.write((char*) &SC[i], sizeof(SC));
    // }
    // file.close();
//------------------END LUU FILE------------------------

//------------------DOC FILE----------------------------
    file.open(FILE_NAME, ios::in|ios::binary);
    file.read((char*) &Sch, sizeof(Sch));
    for(int i=0; i<Sch.getStuNo(); i++)
    {
        file.read((char*) &Stu[i], sizeof(Stu));
    }
    for(int i=0; i<Sch.getClaNo(); i++)
    {
        file.read((char*) &Cla[i], sizeof(Cla));
    }
    for(int i=0; i<Sch.getClaNo(); i++)
    {
        file.read((char*) &SC[i], sizeof(SC));
    } 
    file.close();
//------------------END DOC FILE------------------------

// -----------------QUET LOP HOC------------------------
    int k;
    for(int i=0; i<Sch.getClaNo(); i++)
    {
        for(int j=0; j<SC[i].getNow(); j++)
        {
            k = Sch.findStuId((SC[i].getSC_Stu(j)));
            Stu[k].plusClass();
            Stu[k].addClass(SC[i].getSC_Cla());
        }
    }
// -----------------END QUET LOP HOC--------------------

// -----------------SHOW UP-----------------------------
    // cout << "----------Student---------" << endl;
    // for(int i=0; i<Sch.getStuNo(); i++)
    // {
    //     Stu[i].showUpS();
    // }
    // cout << "----------Class---------" << endl;
    // for(int i=0; i<Sch.getClaNo(); i++)
    // {
    //     Cla[i].showUpC();
    // }
    // for(int i=0; i<Sch.getClaNo(); i++)
    // {
    //     SC[i].showUpSC();
    // }
// -----------------END SHOW UP-------------------------

//------------------CHUC NANG CHINH---------------------
    cout << "\t\t\t\t\tPhan mem quan ly hoc sinh\n";
    cout << "\t\t\t\t\t\tNhom1\n\n";
    cout << "---------------------------------------------------\n";
    
    cout << "1. Nhập thêm 1 sinh viên." << endl;
    cout << "2. Sửa thông tin sinh viên (theo mã)." << endl;
    cout << "3. Xóa 1 sinh viên (theo mã, không xóa được nếu sinh viên đang đăng ký vào một lớp học nào đó)." << endl;
    cout << "4. Nhập thêm lớp học." << endl;
    cout << "5. Sửa thông tin lớp học (theo mã)." << endl;
    cout << "6. Xóa thông tin lớp học (theo mã, không được phép xóa khi đang có sinh viên đăng ký học)." << endl;
    cout << "7. Đăng ký học (quản lý theo mã sinh viên và mã lớp, không được phép đăng ký nữa nếu số lượng đã đủ)." << endl;
    cout << "8. Hủy đăng ký học." << endl;
    cout << "9. Liệt kê toàn bộ sinh viên trong hệ thống." << endl;
    cout << "10. Liệt kê toàn bộ lớp học trong hệ thống." << endl;
    cout << "11. Liệt kê toàn bộ lớp học đang được đăng ký học cùng với các sinh viên của lớp học đó." << endl;
    cout << "12. Nhập nguyên thuỷ (Plus) (Dùng để nhập giá trị ban đầu cho phần mềm)." << endl;
    cout << "13. Thoát khỏi hệ thống." << endl;

    cout << "---------------------------------------------------\n";

    
do
{
    cout << "\tMoi chon chuc nang: ";
    cin >> chucnang;
    switch (chucnang)
    {
        case 1:
        {
            // 1.Nhap them mot sinh vien
            int a;
            cout << "Nhap ma sinh vien can them: ";
            cin >>  a;
            Sch.addStu(a);
            Stu[Sch.getStuNo() - 1].setSId(a);
            Stu[Sch.getStuNo() - 1].readSName(0);
            break;
        };
        case 2:
        {
            // 2.Sua thong tin sinh vien.
            int b;
            char b_1[100];
            cout << "Nhap ma sinh vien can sua: ";
            cin >> b;
            cin.ignore();
            Stu[Sch.findStuId(b)].setSName();
            
            break;
        };
        case 3:
        {
            // 3.Xoa sinh vien theo ma, khong xoa neu sinh vien da tham gia vao 1 lop nao do
            int k;
            cout << "Nhap ma sinh vien muon xoa: " ;
            cin >> k;
            if(Stu[Sch.findStuId(k)].getS_ClaNo() > -1)
                cout << "Sinh vien da dang ky hoc khong the xoa." << endl;
            else
            {
                int h;
                h = Sch.findStuId(k);
                Sch.reductStuNo();
                if (h != Sch.getStuNo())
                {
                    Sch.deleteStuId(h);
                    for (int i=h; i<=Sch.getStuNo(); i++)
                    {
                        Stu[i] = Stu[i+1];
                    }
                }
                cout << "Xoa thanh cong" << endl;
            }
            break;
        };
        case 4:
        {
            // 4.Nhap thong tin lop hoc
            int c;
            cout << "Nhap ma lop hoc can them: ";
            cin >>  c;
            cin.ignore();
            Sch.addCla(c);
            Cla[Sch.getClaNo() - 1].setCId(c);
            Cla[Sch.getClaNo() - 1].readCName(0);
            SC[Sch.getClaNo() - 1].setSC_Cla(c);
            SC[Sch.getClaNo() - 1].readLimit();
            SC[Sch.getClaNo() - 1].readNow();
            SC[Sch.getClaNo() - 1].readSC_Stu();
            break;
        };
        case 5:
        {
            // 5.Sua thong them lop hoc 
            int d;
            char d_1[100];
            cout << "Nhap ma lop hoc can sua: ";
            cin >> d;
            cin.ignore();
            Cla[Sch.findClaId(d)].setNameC();
            break;
        };
        case 6:
        {
            // 6.Xoa lop hoc theo ma, khong the xoa neu sinh vien co sinh vien dang ky hoc
            int k;
            cout << "Nhap ma lop muon xoa: " ;
            cin >> k;
            if(SC[Sch.findClaId(k)].getNow() > 0)
                cout << "Lop da dang ky hoc khong the xoa." << endl;
            else
            {
                int h;
                h = Sch.findClaId(k);
                Sch.reductClaNo();
                if (h != Sch.getClaNo())
                {
                    Sch.deleteClaId(h);
                    for (int i=h; i<=Sch.getClaNo(); i++)
                    {
                        Cla[i] = Cla[i+1];
                    }
                }
                cout << "Xoa thanh cong" << endl;
            }
            break;






        };
        case 7:
        {
            // 7.Dang ky hoc
            int k, h, g;
            cout << "Nhap ma sinh vien muon dang ky hoc: " ;
            cin >> k;
            cout << "Nhap ma mon dang ky hoc: ";
            cin >> h;
            g = Sch.findClaId(h);
            if( SC[g].getNow() == SC[g].getLimit())
                cout << "Dang ky that bai, lop da day." << endl;
            else
            {
                bool test = true;
                for (int i=0; i<SC[g].getNow(); i++)
                {
                    if(SC[g].getSC_Stu(i) == k)
                    {
                        test = false;
                        break;
                    } 
                }
                if (test == true)
                {
                    SC[g].plusNow();
                    SC[g].addStudent(k);
                    Stu[Sch.findStuId(k)].plusClass();
                    Stu[Sch.findStuId(k)].addClass(k);
                    cout << "Dang ky thanh cong." << endl;
                }
                else
                {
                    cout << "Dang ky that bai, sinh vien hien da o trong lop.";
                }
            }
            break;
        };
        case 8:
        {
            // 8.Huy dang ky hoc
            int k, h, g;
            cout << "Nhap ma sinh vien muon huy dang ky hoc: " ;
            cin >> k;
            g = Sch.findStuId(k);
            // cout << Stu[g].getS_ClaNo() << endl;
            if (Stu[g].getS_ClaNo() == -1)
                cout << "Huy dang ky that bai, sinh vien chua dang ky lop nao ca." << endl;
            
            else
            {
                cout << "Nhap mon hoc huy dang ky: " ;
                cin >> h;
                Stu[g].showscla();
                if (Stu[g].findS_Cla(h) == -1)
                    cout << "Sinh vien chua dang ky mon nay." << endl;
                else
                {
                    Stu[g].unplusClass();
                    Stu[g].unaddClass(Stu[g].findS_Cla(h));
                    SC[h].unplusNow();
                    SC[h].unaddStudentId(k);
                    cout << "Huy dang ky thanh cong." << endl;
                }
            }
            break;
        };
        case 9:
        {
            // 9.Liet ke toan bo sinh vien trong he thong
            cout << "------------Toan bo sinh vien------------" << endl;
            for (int i=0; i<Sch.getStuNo(); i++)
            {
                Stu[i].showUpS();
            }
            break;
        };
        case 10:
        {
            // 10.Liet ke toan bo lop hoc trong he thong
            cout << "------------Toan bo lop hoc--------------" << endl;
            for (int i=0; i<Sch.getClaNo(); i++)
            {
                Cla[i].showUpC();
            }
            break;
        };
        case 11:
        {
            // 11.Liet ke Toan bo lop hoc cung voi sinh vien
            cout << "------------Toan bo lop hoc cung voi sinh vien--------------" << endl;
            for (int i=0; i<Sch.getClaNo(); i++)
            {
                SC[i].showUpSC();
            }
            break;
        };
        case 12:
        {
            // 12.Nhap nguyen thuy(bo sung)
        // ------------------NHAP NGUYEN THUY--------------------
            Sch.readStuNo();
            Sch.readStuId();
            Sch.readClaNo();
            Sch.readClaId();

            for (int i=0; i<Sch.getStuNo(); i++)
            {
                Stu[i].setSId(Sch.getStuId(i));
                Stu[i].readSName(i);
            };

            for (int i=0; i<Sch.getClaNo(); i++)
            {
                Cla[i].setCId(Sch.getClaId(i));
                Cla[i].readCName(i);
            };

            for (int i=0; i<Sch.getClaNo(); i++)
            {
                SC[i].setSC_Cla(Sch.getClaId(i));
                SC[i].infor();
                SC[i].readLimit();
                SC[i].readNow();
                SC[i].readSC_Stu();
            }
            
        //------------------NHAP NGUYEN THUY END----------------
            break;
        };
        case 13:
        {
            // 13.Thoat khoi he thong va lu file
        //------------------LUU FILE----------------------------
            file.open(FILE_NAME, ios::out|ios::binary);
            file.write((char*) &Sch, sizeof(Sch));
            for(int i=0; i<Sch.getStuNo(); i++)
            {
                file.write((char*) &Stu[i], sizeof(Stu));
            }
            for(int i=0; i<Sch.getClaNo(); i++)
            {
                file.write((char*) &Cla[i], sizeof(Cla));
            }
            for(int i=0; i<Sch.getClaNo(); i++)
            {
                file.write((char*) &SC[i], sizeof(SC));
            }
            file.close();
        //------------------END LUU FILE------------------------
            return 0;
        }
    }
    if( chucnang!=0 )
    {//Neu chon #0 va sau khi thuc hien xong thì quay ve menu chon
        cout<<endl;
        cout<<"========================="<<endl;
        // system("cls");
        // cout<<"=> Nhan Enter de tro ve !";
        // cin.ignore();//Doc va loai bo ki tu con trong bo nho dem
        // cin.get();//Giu ky tu Enter trong bo nho dem
        // system("clear");//Xoa
    } 
} 
while(chucnang!=0);
//------------------END CHUC NANG CHINH-----------------
}