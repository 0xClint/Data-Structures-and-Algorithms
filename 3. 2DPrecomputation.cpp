// Given integers.Given Q queries and in each query given L and R print sum of array elemnts from index L to R(L, R included)
// Constraints
// 1<=N<=10^5
// 1 <=a[i]<=10^9
// 1<=L,R<=10^5

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int sum[N];
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {

        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << sum[l] - sum[r];
    }
}

// O(N)