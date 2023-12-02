// https://leetcode.com/problems/merge-sorted-array/submissions/

#include <bits/stdc++.h>
using namespace std;

char toL(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isAllowed(char ch)
{
    return ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9' ||
           ch >= 'A' && ch <= 'Z';
    // return isalnum(ch);
}

int main()
{

    // string s = "aaBBa@";

    // int start = 0;

    // int end = s.size() - 1;
    // while (start <= end)
    // {

    //     if (!isAllowed(s[start]))
    //     {
    //         start++;
    //     }

    //     if (!isAllowed(s[end]))
    //     {
    //         end--;
    //     }

    //     if (toL(s[start]) == toL(s[end]))
    //     {
    //         start++;
    //         end--;
    //     }
    //     else
    //     {
    //         cout << "No";
    //         return 0;
    //     }
    // }
    // cout << "Yes";
    // return 0;

    string str = "testsample";
    int arr[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        char ch = arr[i];
        int number = 0;

        if (ch >= 'a' || ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int max = -1;
    int ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            cout<<"HEllo";
            ans = i;
            max = arr[i];
        }
    }
    cout << ans;

    char ansFinal = 'a' + ans;
    cout << ansFinal;
}