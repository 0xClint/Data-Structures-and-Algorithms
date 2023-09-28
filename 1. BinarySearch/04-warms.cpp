#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0, t, n;
    cin >> n;
    int counts[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        sum += t;
        counts[i] = sum;
    }
    int ind = 0, warms[sum];

    for (int j = 1; j <= sum; j++)
    {
        if (j > counts[ind])
            ind++;
        warms[j] = ind + 1;
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        cout << warms[t] << endl;
    }
    return 0;
}