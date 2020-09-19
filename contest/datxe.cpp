#include <iostream>
using namespace std;

int main()
{
    uint64_t ncount, dcount, i, j, k, n, m;
    cin >> n >> m;
    uint64_t ngang[n + 1], doc[n + 1], hngang[n + 1], hdoc[n + 1];
    for (i = 0; i <= n ; i++)
    {
        ngang[i] = 0;
        doc[i] = 0;
        hngang[i] = 0;
        hdoc[i] = 0;
    }
    j = 0;
    for (i = 0; i < m; i++)
    {
        j++;
        cin >> ngang[j] >> doc[j];
        hngang[ngang[j]] = 1;
        hdoc[doc[j]] = 1;
        ncount = 0;
        dcount = 0;
        for (k = 1; k <= n ; k++)
        {
            if (hngang[k] == 0)
                ncount++;
            if (hdoc[k] == 0)
                dcount++;
        }
        cout << ncount * dcount << " ";
    }
}