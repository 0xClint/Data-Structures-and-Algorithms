#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> heights = {2, 4};
    // vector<int> heights = {2, 1, 5, 6, 2, 3};
    int n = heights.size();
    int area = 0;
    for (int i = 0; i < n; i++)
    {
        int left = i;
        int right = i;
        int maxHeight = heights[i];
        while (left >= 0)
        {
            left--;
            if (maxHeight >= heights[left])
            {
                break;
            }
        }
        while (right < n)
        {
            right++;
            if (maxHeight >= heights[right])
            {
                break;
            }
        }

        int tempArea = maxHeight * (right - left - 1);
        if (tempArea > area)
        {
            area = tempArea;
        }
    }

    cout << "area = " << area << endl;
}
