// https://www.codingninjas.com/studio/problems/reverse-the-array_1262298?leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int e = n - 1;
        int s = m + 1;
        while (e >= s)
        {
            swap(arr[s], arr[e]);
            e--;
            s++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}