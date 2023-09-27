#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{

    int even[8] = {1,
                   5,
                   9,
                   15,
                   23,
                   56,
                   76,
                   98};

    int odd[7] = {
        1,
        5,
        8,
        13,
        19,
        45,
        67};

    int index = binarySearch(odd, sizeof(odd), 1);
    cout << "THe index of given value is " << index << endl;
}