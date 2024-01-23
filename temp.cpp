#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int s = 0;
    int e = nums.size() - 1;
    int mid = (e + s) / 2;
    vector<int> ans(2, -1);

    while (s <= e)
    {
        if (nums[mid] == target)
        {
            int temp1 = mid;
            while (nums[temp1 + 1] != target)
            {
                temp1++;
            }
            ans[1] = temp1;

            int temp2 = mid;
            while (nums[temp2 - 1] == target)
            {
                temp2--;
            }
            ans[0] = temp1;
            break;
        }

        if (nums[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;

        mid = (e + s) / 2;
    }
    cout << "HELLO" << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
