// https://leetcode.com/problems/count-primes/submissions/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 500000;
    vector<bool> prime(n + 1, true);

    int count = 0;
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;

            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    cout << count << endl;
}