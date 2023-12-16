// https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650

#include <bits/stdc++.h>
using namespace std;

int countDistinctWays(int nStairs)
{

    //  Write your code here.
    if (nStairs < 0)
        return 0;

    if (nStairs == 0)
        return 1;

    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}

int main()
{
    int nStairs = 5;
    cout << countDistinctWays(nStairs) << endl;
}