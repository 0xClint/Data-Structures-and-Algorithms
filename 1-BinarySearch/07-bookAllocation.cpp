#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int n, m;
int chaptTime[N];

bool checkTime(int chapTime[], int m, int n, int mid)
{

    int dayCount = 1;
    int timeSum = 0;
    for (int i = 0; i < m; i++)
    {
        if (timeSum + chapTime[i] <= mid)
        {
            timeSum += chapTime[i];
        }
        else
        {
            dayCount++;
            if (dayCount > n || chapTime[i] > mid)
            {
                return false;
            }
            timeSum = chapTime[i];
        }
    }

    return true;
}

int main()
{

    int t, sum = 0;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> chaptTime[i];
            sum += chaptTime[i];
        }

        int s = 0, e = sum, ans = -1, mid = (s + e) / 2;
        while (s <= e)
        {
            if (checkTime(chaptTime, m, n, mid))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = (s + e) / 2;
        }

        cout << ans << endl;
    }
}