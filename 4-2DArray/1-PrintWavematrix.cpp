// https://www.codingninjas.com/studio/problems/print-like-a-wave_893268

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int nRows, mCols;
        vector<vector<int>> arr;
        vector<int> ans;

        cin >> nRows >> mCols;

        for (int j = 0; j < nRows; j++)
        {
            for (int i = 0; i < mCols; i++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < mCols; i++)
        {

            if (i % 2 == 0)
            {
                for (int j = 0; j < nRows; j++)
                {
                    cout << arr[j][i] << " ";
                    ans.push_back(arr[j][i]);
                }
            }
            else
            {
                for (int j = nRows - 1; j >= 0; j--)
                {
                    cout << arr[j][i] << " ";
                    ans.push_back(arr[j][i]);
                }
            }
        }
        cout << endl;
    }
}