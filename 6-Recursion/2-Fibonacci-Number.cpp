// https://leetcode.com/problems/fibonacci-number/description/

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int fibLoop(int n)
{
    int n1 = 0, n2 = 1, n3;

    for (int i = 1; i < n; i++)
    {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}

int main()
{

    int a = 10;
    // cout << "Fibonacci of " << a << endl;
    cout << fib(a) << endl;
    cout << "Loop : " << fibLoop(a) << endl;
}