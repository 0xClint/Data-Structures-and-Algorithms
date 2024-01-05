#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);
}

int sumUp(int arr[], int size, int sum = 0)
{
    if (size == 0)
        return sum;

    return sumUp(arr + 1, size - 1, sum + arr[0]);
}

// int searchArr(int arr[], int size, int key, int index = 0)
// {
//     if (size == 0)
//     {
//         return -1;
//     }
//     if (arr[0] == key)
//     {
//         return index;
//     }
//     return searchArr(arr + 1, size - 1, key, index + 1);
// }

int searchArr(int arr[], int size, int key, int index = 0)
{
    if (arr[0] == key)
        return index;

    if (size == 0)
        return -1;

    searchArr(arr + 1, size - 1, key, index + 1);
}

int main()
{
    int arr[5] = {10, 8, 5, 15, 71};
    // int arr[5] = {8, 8, 8, 8, 8};
    // int arr[5] = {8, 11, 13, 15, 71};

    cout << "Is sorted = " << isSorted(arr, 5) << endl;
    cout << "Sum of arr = " << sumUp(arr, 5) << endl;
    cout << "index of key = 15 in arr is " << searchArr(arr, 5, 71) << endl;
}