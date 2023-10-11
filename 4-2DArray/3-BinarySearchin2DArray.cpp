// https://leetcode.com/problems/search-a-2d-matrix/submissions/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 10;

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];
        if (element == target)
        {
            cout << 1 << endl;
            return 0;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    cout << 0 << endl;
    return 0;
}