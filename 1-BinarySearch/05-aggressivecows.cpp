// https://www.codingninjas.com/studio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, cows;
int positions[N];

bool distanceCheck(int minDist)
{
    int lastPos = positions[0];
    int cowsCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (positions[i] - lastPos >= minDist)
        {
            cowsCount++;
            if (cowsCount == cows)
                return true;

            lastPos = positions[i];
        }
    }
    return false;
}

int main()
{

    cin >> n >> cows;
    for (int i = 0; i < n; i++)
    {
        cin >> positions[i];
    }
    sort(positions, positions + n);

    int s = 0, e = 1e9, ans = -1, mid = (s + e) / 2;
    while (e >= s)
    {

        if (distanceCheck(mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }

    cout << ans;
}