#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int n)
{
    if (n == 1 || n == 0)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    sortArray(arr, --n);
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

    sortArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}