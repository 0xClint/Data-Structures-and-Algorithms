#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int n, pies;
int radii[N];

bool pieCheck(int minDist)
{
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> pies;
        for (int i = 0; i < n; i++)
        {
            cin >> radii[i];
        }
        sort(radii, radii + n);

        int s = 0, e = 1e4, mid = (s + e) / 2;
        while (e > s)
        {
            int vol = M_PI * mid * mid;
            if (pieCheck(vol))
            {
                s = mid;
            }
            else
            {
                e = mid - 1;
            }
            mid = (s + e) / 2;
        }

        if (pieCheck(e))
        {
            cout << e << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}