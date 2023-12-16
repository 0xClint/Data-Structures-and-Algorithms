#include <bits/stdc++.h>
using namespace std;

int main()
{
    // make a jagged array with dynamic memory
    int n, m;

    cout << "Enter number of rows" << endl;
    cin >> n;

    int **arr = new int *[n];

    cout << "Enter column lengths" << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = new int[temp];
    }
    cout << "arr length = " << sizeof(arr[1]) << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < sizeof(arr[i]); j++)
    //     {3
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < sizeof(arr[i]); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // releasing memory
    // for (int i = 0; i < n; i++)
    // {
    //     delete[] arr[i];
    // }
    // delete[] arr;
}