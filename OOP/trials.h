#ifndef TRIALS_H
#define TRIALS_H

#include <iostream>
#include <fstream>

using namespace std;

class School
    {
    private: 
        int     stuNo;
        int     claNo;
        int     stuId[100];
        int     claId[100];
    public:
        void    readStuNo();
        void    readStuId();
        void    readClaNo();
        void    readClaId();
        int     getStuNo();
        int     getClaNo();
        int     getStuId(int i);
        int     getClaId(int i);
        void    addStu(int a);
        void    addCla(int c);
        int     findStuId(int b);
        int     findClaId(int b);
        void    reductStuNo();
        void    deleteStuId(int h);
        void    reductClaNo();
        void    deleteClaId(int h);
        
    };

class Student: public School
{
    private:
        int     sId;
        char    sName[100];
        int     s_ClaNo;
        int     s_Cla[100];
    public:
        int     setSId(int Id);
        void    readSName(int i);
        int     getSId();
        char    getSName();
        void    showUpS();
        void    setSName();
        void    plusClass();
        void    addClass(int classId);
        int     getS_ClaNo();
        int     getS_Cla(int i);
        void    unplusClass();
        void    unaddClass(int classId);
        int     findS_Cla(int h);
        void    showscla();
};

class Class: public School
{
    private:
        int     cId;
        char    cName[100];
    public:
        int     setCId(int Id);
        void    readCName(int i);
        int     getCId();
        char    getCName();
        void    showUpC();
        void    setNameC();
};

class Student_Class: public School
{
    private:
        int     limit;
        int     now; 
        int     sc_cla;
        int     sc_stu[100];
    public:
        void    setSC_Cla(int Id);
        void    infor();
        void    readLimit();
        void    readNow();
        void    readSC_Stu();
        int     getLimit();
        int     getNow();
        int     getSC_Cla();
        int     getSC_Stu(int i);
        void    showUpSC();
        void    plusNow();
        void    addStudent(int StudentId);
        void    unplusNow();
        void    unaddStudentId(int studentId);
};

#endif