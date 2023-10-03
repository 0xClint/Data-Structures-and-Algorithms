#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int n = 4;
long long m = 7;
long long trees[N] = {20, 15, 10, 17};

bool checkWood(long long mid)
{

    long long wood=0;
    for (int i = 0; i < n; i++)
    {
        if (mid > trees[i])
        {
            wood += (trees[i] - mid);
        }
    }
    return wood >= m;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }
    long long start = 0;
    long long end = 1e9;
    long long mid = (end + start) / 2;
    while (end > start)
    {
        if (checkWood(mid))
        {
            start = mid;
        }
        else
        {
            end = mid - 1;
        }
        mid = (end + start) / 2;
    }
    return mid;
}