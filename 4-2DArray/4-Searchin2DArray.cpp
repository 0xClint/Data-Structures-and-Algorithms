// https://leetcode.com/problems/search-a-2d-matrix-ii/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix{{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 100;

    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];
        if (element == target)
        {
            cout << 1 << endl;
            return 0;
        }
        if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }

    cout << 0 << endl;
    return 0;
}