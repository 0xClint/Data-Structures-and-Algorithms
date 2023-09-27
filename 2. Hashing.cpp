// Given array a of N integers.Given Q queries and in each query given a number X, print count of that number in array.Constraints
// Constraints
// 1 <= N, Q <= 10 ^ 5
// 1 <= a[i] <= 10^7

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int hsh[N];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }
    int t;
    cin >> t;
    while (t--)
    {
        cout << hsh[t] << " ";
    }
}