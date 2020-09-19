#include <iostream>
#include "trials.h"

using namespace std;

// ------------SCHOOL--------------------
void    School::readStuNo()
{
    cout << "Nhap so sinh vien: ";
        cin >> stuNo;
                
}
void    School::readStuId()
{
    for (int i=0; i<stuNo; i++)
    {
        cout << "Nhap ma sv thu " << i+1 << ": ";
        cin >> stuId[i];
    }
}
void    School::readClaNo()
{
    cout << "Nhap so lop hoc: ";
        cin >> claNo;
}
void    School::readClaId()
{
    for (int i=0; i<claNo; i++)
    {
        cout << "Nhap ma lop hoc thu " << i+1 << " ";
        cin >> claId[i];
    }
}
int     School::getStuNo()
{
    return stuNo;
}
int     School::getClaNo()
{
    return claNo;
}
int     School::getStuId(int i)
{
    return stuId[i];
}
int     School::getClaId(int i)
{
    return claId[i];
}
void    School::addStu(int a)
{
    stuNo++;
    stuId[stuNo - 1] = a;
}
void    School::addCla(int c)
{
    claNo++;
    claId[claNo - 1] = c;
}
int    School::findStuId(int b)
{
    for (int i=0; i<stuNo; i++)
    {
        if (stuId[i] == b)
            return i;
    }
    return -1;
}
int    School::findClaId(int b)
{
    for (int i=0; i<claNo; i++)
    {
        if (claId[i] == b)
            return i;
    }
    return -1;
}
void    School::reductStuNo()
{
    stuNo = stuNo-1;
}
void    School::deleteStuId(int h)
{
    
    for (int i =0; i<stuNo; i++)
    {
        stuId[i] = stuId[i+1];
    }
}
void    School::reductClaNo()
{
    claNo = claNo-1;
}
void    School::deleteClaId(int h)
{
    
    for (int i =0; i<claNo; i++)
    {
        claId[i] = claId[i+1];
    }
}

// ------------SCHOOL -- END-------------


// ------------STUDENT-------------------
int Student::setSId(int Id)
{
    sId = Id;
}
void Student::readSName(int i)
{
    if (i == 0)
    {
        cin.ignore();
    }
    cout << "Nhap ten sv " << sId << ": ";
    cin.getline(sName,100);
    s_ClaNo = -1;
}
int Student::getSId()
{
    return sId;
}
char Student::getSName()
{
    cout << sName;
}
void Student::showUpS()
{
    cout << sId << ": " << sName << endl;   
}
void Student::setSName()
{
    cout << "Nhap ten sinh vien moi: " ;
    cin.getline(sName, 100);
}
void Student::plusClass()
{
    s_ClaNo++;
}
void Student::addClass(int classId)
{
    s_Cla[s_ClaNo] = classId;
}
int Student::getS_ClaNo()
{
    return s_ClaNo;
}
int Student::getS_Cla(int i)
{
    return s_Cla[i];
}
void Student::unplusClass()
{
    s_ClaNo = s_ClaNo - 1;
}
void Student::unaddClass(int classId)
{
    int j;
    for (int i=0; i<=s_ClaNo; i++)
    {
        if (s_Cla[i] == classId)
            j = i;
    }
    if (j != s_ClaNo)
    {
        for (int i=j; i<s_ClaNo; i++)
        {
            s_Cla[i] = s_Cla[i+1];
        };
    }
}
int    Student::findS_Cla(int h)
{
    for(int i =0; i<s_ClaNo; i++)
    {
        if (s_Cla[i] == h)
        return i;
    }
    return -1;
}
void Student::showscla()
{
    for(int i =0; i<s_ClaNo; i++)
    {
        cout << s_Cla[i] << endl;  
    }
}
// ------------STUDENT -- END------------


// ------------CLASS---------------------
int Class::setCId(int Id)
{
    cId = Id;
}
void Class::readCName(int i)
{
    if (i == 0)
        cout << "-----------Nhap ten lop--------" << endl;
    cout << "Nhap ten lop " << cId << ": ";
    cin.getline(cName,100);
}
int Class::getCId()
{
    return cId;
}
char Class::getCName()
{
    cout << cName;
}
void Class::showUpC()
{
    cout << cId << ": " << cName << endl;   
}
void Class::setNameC()
{
    cout << "Nhap ten lop hoc moi: ";
    cin.getline(cName, 100);
}
// ------------CLASS -- END--------------


// ------------STUDENT -- CLASS ---------
void Student_Class::setSC_Cla(int Id)
{
    sc_cla = Id;
}
void Student_Class::infor()
{
    cout << "-------LOP " << sc_cla << "-------" << endl;
}
void Student_Class::readLimit()
{
    cout << "Nhap gioi han cua lop hoc " << sc_cla << ": ";
    cin >> limit;
}
void Student_Class::readNow()
{
    cout << "Nhap so sinh vien cua lop hoc hien tai: ";
    cin >> now;
}
void Student_Class::readSC_Stu()
{
    cout << "Nhap ma sv trong lop hoc " << sc_cla <<": " << endl;
    for (int i=0; i<now; i++)
    {
        cout << "Nhap ma sv thu " << i+1 << ": ";
        cin >> sc_stu[i];
    }
}
int Student_Class::getLimit()
{
    return limit;
}
int Student_Class::getNow()
{
    return now;
}
int Student_Class::getSC_Cla()
{
    return sc_cla;
}
int Student_Class::getSC_Stu(int i)
{
    return sc_stu[i];
}
void Student_Class::showUpSC()
{
    cout << "Lop " << sc_cla << ": " << endl;
    cout << "gioi han thanh vien: " << limit << endl;
    cout << "so thanh vien hien tai: " << now << endl;
    cout << "cac thanh vien cua lop: " << endl;
    for (int i=0; i<now; i++)
    {
        cout << sc_stu[i] << endl;
    }
}
void Student_Class::plusNow()
{
    now = now + 1;
}
void Student_Class::addStudent(int StudentId)
{
    sc_stu[now - 1] = StudentId;
}
void Student_Class::unplusNow()
{
    now = now - 1;
}
void Student_Class::unaddStudentId(int studentId)
{
    int j;
    for (int i=0; i<=now; i++)
    {
        if (sc_stu[i] == studentId)
            j = i;
    }
    if (j != now)
    {
        for (int i=j; i<=now; i++)
        {
            sc_stu[i] = sc_stu[i+1];
        };
    }
}

// ------------FUCKING OVER--------------