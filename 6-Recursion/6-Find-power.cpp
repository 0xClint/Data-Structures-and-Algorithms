#include <bits/stdc++.h>
using namespace std;

int getPower1(int a, int b, long long int result = 1)
{
    if (b == 0)
        return result;

    return getPower1(a, --b, result * a);
}

int getPower2(int a, int b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    if (b % 2 == 0)
        return getPower2(a, b / 2) * getPower2(a, b / 2);

    else
        return a * getPower2(a, (b) / 2) * getPower2(a, b / 2);
}
int main()
{

    int a, b;
    cin >> a >> b;
    // cout << a << "^" << b << " = " << getPower1(a, b) << endl;
    cout << a << "^" << b << " = " << getPower2(a, b) << endl;
}

// int power2(int a, int b, long long int result = 1)
// {
//     if (b == 0)
//     {
//         return result;
//     }

//     power2(a, b - 1, result * a);
// }