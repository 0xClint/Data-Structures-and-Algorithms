#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    // Base Case
    if (n == 0)
        return 1;

    // Recursion Relation
    return n * factorial(n - 1);
}

int power(int n)
{
    if (n == 0)
        return 1;

    return 2 * power(n - 1);
}

// Head Recursion ( recursion relation before processing )
void printInt(int n)
{ // Base Case
    if (n == 0)
        return;

    // Recursion Relation
    printInt(n - 1);

    // Processing
    cout << n << endl;
}

// Tail Recursion ( recursion relation in last )
void printIntReverse(int n)
{ // Base Case
    if (n == 0)
        return;

    // Processing
    cout << n << endl;

    // Recursion Relation
    printIntReverse(n - 1);
}

int main()
{
    int a = 4;
    cout << a << "! = " << factorial(a) << endl;

    int b = 5;
    cout << " 2^" << b << " = " << power(b) << endl;

    int c = 5;
    cout << "Print 1 to " << c << endl;
    printInt(c);
    cout << "Print 1 to " << c << " in Reverse" << endl;

    printIntReverse(c);
}