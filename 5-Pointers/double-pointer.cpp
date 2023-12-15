#include <bits/stdc++.h>
using namespace std;

void update(int **p2)
{
    // kuch change hoga? - NO
    // p2 = p2 + 1;

    // kuch change hoga? - YES
    // *p2 = *p2 + 1;

    // kuch change hoga? - YES
    **p2 = **p2 + 1;
}

int main()
{
    int i = 7;
    int *p = &i;
    int **p2 = &p;

    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // cout << &p << endl;
    // cout << p2 << endl;

    // cout << endl
    //      << endl;
    cout << "before function call :" << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
    update(p2);
    cout << "after function call :" << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
}