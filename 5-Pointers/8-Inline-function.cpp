
/*
Inline Function :
An inline function is a function that is expanded in line when it is called. When the inline function is called
whole code of the inline function gets inserted or substituted at the point of the inline function call. This
substitution is performed by the C++ compiler at compile time. An inline function may increase efficiency if it
is small.
*/

#include <bits/stdc++.h>
using namespace std;

inline int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{

    int a = 1, b = 5;
    cout << "Max of a and b = " << max(a, b) << endl;

    a = a + 7;
    b = b + 1;
    cout << "Max of a and b = " << max(a, b) << endl;

    return 0;
}