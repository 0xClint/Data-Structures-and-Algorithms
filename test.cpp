#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 1, 3};
    int k = 2;
    int n = a.size();
    int sum = a[0];
    int left = 0;
    int right = 0;
    int len(0);

    while (right < n)
    {
        if (sum == k)
            len = max(len, right - left + 1);

        if (sum <= k)
        {
            right++;
            if (right < n)
                sum += a[right];
        }
        else
        {
            sum -= a[left];
            left++;
        }
    }

    cout << "ans = " << len << endl;
}
