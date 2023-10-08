// https://leetcode.com/problems/string-compression/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<char> chars{'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int i = 0;
    int countIndex = 0;
    int n = chars.size();

    while (i < n)
    {

        int j = i + 1;

        while (j < n && chars[i] == chars[j])
        {
            j++;
        }

        chars[countIndex++] = chars[i];
        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);

            for (char ch : cnt)
            {
                chars[countIndex++] = ch;
            }
        }
        i = j;
    }

    cout << countIndex << endl;
    for (char ch : chars)
    {
        cout << ch << ' ';
    }
    cout << endl;

    return 0;
}