#include <iostream> 
using namespace std;
int main()
{
    char name[100];
    cout << "what name: " ;
    cin.getline(name,100);
    cout << name << endl;
    cout << "new name: ";
    cin.getline(name, 100);
    cout << name << endl;

}