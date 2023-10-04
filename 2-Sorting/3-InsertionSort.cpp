// https://www.codingninjas.com/studio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2&leftPanelTab=1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
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
                    break;
            }
            arr[j + 1] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}