#include<iostream>
#include<fstream>
#define FILE_NAME "test_binary1.dat"
using namespace std;
struct Student 
{
   int roll_no;
   string name;
};
int main() 
{
    //----------------Mo file va viet---------------------
//    ofstream wf("test_binary1.dat", ios::out | ios::binary);
//    Student wstu[3];
//    wstu[0].roll_no = 1;
//    wstu[0].name = "Ram";
//    wstu[1].roll_no = 2;
//    wstu[1].name = "Shyam";
//    wstu[2].roll_no = 3;
//    wstu[2].name = "Madhu";
// //    for(int i = 0; i < 3; i++)
//       wf.write((char *) &wstu, sizeof(Student));
//    wf.close();
    //----------------END--------------------------------
   
//    if(!wf.good()) {
//       cout << "Error occurred at writing time!" << endl;
//       return 1;
//    }

   //---------------Mo file de doc-------------------
   fstream rf;
   rf.open(FILE_NAME, ios::in | ios::binary);
   Student rstu[3];
//    for(int i = 0; i < 3; i++)
      rf.read((char *) &rstu, sizeof(Student));
   
    //--------------END-------------------------------

//    if(!rf) {
//       cout << "Error occurred at reading time!" << endl;
//       return 1;
//    }

   //----------------Viet ra man hinh------------------
   cout<<"Student's Details:"<<endl;
   for(int i=0; i < 3; i++) {
      cout << "Roll No: " << rstu[i].roll_no << endl;
      cout << "Name: " << rstu[i].name << endl;
      cout << endl;
   }
    rf.close();
}