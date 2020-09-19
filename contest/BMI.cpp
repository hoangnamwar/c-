#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float w, h;
    cin >> w >> h;
    w = w / ( h * h );
    if (w > 25)
        cout << "Overweight";
    if (w < 18)
        cout << "Underweight";
    else
        if (w < 25)
            cout << "Normal weight";            
    
}