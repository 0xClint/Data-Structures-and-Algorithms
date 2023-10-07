// https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186?leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> num)
{

    int s = 0;
    int e = num.size() - 1;

    while (e > s)
    {
        swap(num[s], num[e]);
        s++;
        e--;
    }
    return num;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int i = n - 1, j = m - 1;
        vector<int> ans;
        int carry = 0;

        while (i >= 0 && j >= 0)
        {
            int val1 = a[i];
            int val2 = b[j];

            int sum = val1 + val2 + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans.push_back(sum);
            i--;
            j--;
        }

        while (i >= 0)
        {
            int sum = a[i] + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans.push_back(sum);
            i--;
        }

        while (j >= 0)
        {
            int sum = b[j] + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans.push_back(sum);
            j--;
        }

        while (carry != 0)
        {
            int sum = carry;
            carry = sum / 10;
            sum = sum % 10;
            ans.push_back(sum);
        }

        ans = reverse(ans);

        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}