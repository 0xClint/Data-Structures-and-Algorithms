#include <bits/stdc++.h>
using namespace std;

/*
***Drawbacks of Merge Sort:***

Space complexity:
Merge sort requires additional memory to store the merged sub-arrays during the sorting process.

Not in-place:
Merge sort is not an in-place sorting algorithm, which means it requires additional memory to store the sorted data.
This can be a disadvantage in applications where memory usage is a concern.

Not always optimal for small datasets:
For small datasets, Merge sort has a higher time complexity than some other sorting algorithms, such as insertion sort.
This can result in slower performance for very small datasets.

*/

void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0, index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] > second[index2])
            arr[mainArrayIndex++] = second[index2++];
        else
            arr[mainArrayIndex++] = first[index1++];
    }

    while (index1 < len1)
        arr[mainArrayIndex++] = first[index1++];

    while (index2 < len2)
        arr[mainArrayIndex++] = second[index2++];
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int n = 7;
    int arr[n] = {122,
                  -46,
                  13,
                  98,
                  356,
                  -754,
                  65};

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}