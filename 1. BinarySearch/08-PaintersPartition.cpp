#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int n, p;
int boards[N];

bool checkPaint(int boards[], int n, int p, int mid)
{

    int painterCount = 1;
    int boardSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (boardSum + boards[i] <= mid)
        {
            boardSum += boards[i];
        }
        else
        {
            painterCount++;
            if (painterCount > p || boards[i] > mid)
            {
                return false;
            }
            boardSum = boards[i];
        }
    }

    return true;
}

int main()
{

    int sum = 0;

    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> boards[i];
        sum += boards[i];
    }

    int s = 0, e = sum, ans = -1, mid = (s + e) / 2;
    while (s <= e)
    {
        if (checkPaint(boards, n, p, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans << endl;

    return 0;
}