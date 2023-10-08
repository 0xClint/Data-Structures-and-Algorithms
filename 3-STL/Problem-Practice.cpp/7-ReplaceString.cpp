// https://www.codingninjas.com/studio/problems/replace-spaces_1172172

#include <bits/stdc++.h>
using namespace std;

string reverse(string str)
{
    int s = 0, e = str.length() - 1;

    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
    return str;
}

int main()
{
    string s1 = "ab", s2 = "eidbaooo";

    int count(0);

    if (s2.find(s1))
        count++;
    if (s2.find(reverse(s1)))
        count++;
    cout << count;
    // return count > 0;
}