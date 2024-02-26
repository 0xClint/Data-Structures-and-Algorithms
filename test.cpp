#include <bits/stdc++.h>
using namespace std;

bool sqrCheck(long long int k)
{
    long long val = pow(k, 0.5);
    if (val * val == k)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }

        if (sqrCheck(sum))
        {
            cout << "YES" << endl;
        }

        else
            cout << "NO" << endl;
    }
}
