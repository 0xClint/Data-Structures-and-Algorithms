#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 9, 1, 8, 3};
    int n = 5;

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}