// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> nums{3, 4, 5, 1, 2};
    vector<int> nums{2,1,3,4};
    int count = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }

    if (nums[nums.size() - 1] > nums[0])
        count++;

    cout << (count <= 1) << endl;
}