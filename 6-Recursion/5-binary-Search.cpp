// https://www.codingninjas.com/studio/problems/binary-search_972?leftPanelTab=0&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] < key)
        return binarySearch(arr, mid + 1, e, key);
    else
        return binarySearch(arr, s, mid - 1, key);
}

int main()
{
    int arr[5] = {5, 11, 26, 47, 81};

    cout << "Binary Search of key 15 --> " << binarySearch(arr, 0, 5, 81) << endl;
}