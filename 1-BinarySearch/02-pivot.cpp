#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return mid;
}

int main()
{

    int arr[5] = {12, 15, 18, 2, 4};
    int ans = pivot(arr, 5);
    cout << ans << endl;
}