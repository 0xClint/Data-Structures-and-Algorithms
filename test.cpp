#include <bits/stdc++.h>
using namespace std;

int sortData(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid - 1] < arr[mid])
        {
            start = mid;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[] = {0, 10, 15, 5, 2};

    int ans = sortData(arr, 5);

    cout << arr[ans] << endl;
    return 0;
}