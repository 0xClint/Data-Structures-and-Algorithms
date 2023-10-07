// https://leetcode.com/problems/move-zeroes/submissions/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{0, 1, 0, 3, 12};
    int i = 0;
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }

    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}