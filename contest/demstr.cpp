#include <iostream>
using namespace std;
int main()
{
    uint64_t mo, chil, count, i, j;
    string mostr, chilstr;
    cin >> mostr;
    cin >> chilstr;
    mo = mostr.length();
    chil = chilstr.length();
    count = 0;
    bool test;
    for (i = 0; i < mo; i++)
    {
        if (mostr[i] == chilstr[0])
        {
            test = true;
            for (j = 0; j < chil; j++)
            {
                if (mostr[i + j] != chilstr[j])
                {
                    test = false;
                    break;
                }
            }
            if (test == true)
            {
                count++;
                i = i + chil - 1;
            }
        }
    }
    cout << count;
}