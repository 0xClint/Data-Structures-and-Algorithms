#include <bits/stdc++.h>
using namespace std;

// Can make default from right most arguments only

void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    print(arr, 5, 2);
    cout << endl;
    print(arr, 5);
}