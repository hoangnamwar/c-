#include <iostream>
using namespace std;
int main()
{
    uint64_t n, k, i, count;
    cin >> n >> k;
    uint64_t day[n];
    for (i = 0; i < n; i++)
    {
        cin >> day[i];
    }
    // count = 0;
    bool test = false;
    for (i = 0; i < n; i++)
    {
        // if (    (day[k - 1] <= day[i])  &   (day[i] != 0)   )
        //     count++;
        if (day[i] == k)
        {
            cout << "YeS";
            test = true;
            break;
        }
    }
    if (test == false)
        cout << "nO";

}