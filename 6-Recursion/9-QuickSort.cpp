#include <bits/stdc++.h>
using namespace std;

/*
Quick sort is a divide and conquer algorithm in which we choose a pivot point and partition the afray into two parts i.e,
left and right. The left part contains the numbers smaller than the pivot element and the right part contains the numbers
larger than the pivot element. Then we recursively sort the left and right parts of the array.

*/

int partition(int *arr, int s, int e)

{
    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

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

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    // sort Left Part
    quickSort(arr, s, p - 1);

    // sort Right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int n = 8;
    int arr[n] = {-6, 6, -6, -6, -4, -2, 2, 6};

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}