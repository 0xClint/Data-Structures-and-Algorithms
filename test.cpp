// https://leetcode.com/problems/merge-sorted-array/submissions/

#include <bits/stdc++.h>
using namespace std;

string digit[10] = {
    "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void getNumberWord(int n)
{
    if (n == 0)
        return;

    getNumberWord(n / 10);
    cout << digit[n % 10 - 1] << " ";
}

int main()
{
    int number = 412;
    getNumberWord(number);
}