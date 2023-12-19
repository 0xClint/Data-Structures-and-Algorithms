#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{

    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void solve(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    solve(arr, s, p - 1);
    solve(arr, p + 1, e);
}

int main()
{
    vector<int> arr = {6, 6, -6, -2, -4, -6, 2, -6};

    solve(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
