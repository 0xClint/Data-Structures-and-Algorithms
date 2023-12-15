#include <bits/stdc++.h>
using namespace std;

//*** BAD PRACTICE ***
// int &func(int n)
// {
//     int i = n;
//     int &ans = i;
//     return ans;
// }
// *******************

void update(int &n)
{
    n++;
}

int main()
{
    int i = 7;

    int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    cout << j << endl;
    update(j);
    // cout << func(j) << endl;
    cout << i << endl;
}