#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n;
long long int arr[N] ;

string isTPrime(long long num)
{
    long long s = 1, e = num, mid = (e + s) / 2;
    if (num == 1)
    {
        return "NO";
    }
    while (e >= s)
    {
        long long square = mid * mid;

        if (square == num)
        {
            return "YES";
        }
        if (square > num)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (e + s) / 2;
    }
    return "NO";
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        cout << isTPrime(arr[i]) << endl;
    }
    return 0;
}