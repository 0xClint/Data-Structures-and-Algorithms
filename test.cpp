#include <bits/stdc++.h>
using namespace std;

void sqrCheck(int k)
{
    long long int s = 1;
    long long int e = k;
    long long int mid = (s + e) / 2;

    while (s <= e)
    {
        if (mid * mid == k)
        {
            cout << "YES" << endl;
            return;
        }

        if (mid * mid > k)
            e = mid - 1;
        else
            s = mid + 1;

        mid = (s + e) / 2;
    }
    cout << "NO" << endl;
    ;
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

        sqrCheck(sum);
    }
}
