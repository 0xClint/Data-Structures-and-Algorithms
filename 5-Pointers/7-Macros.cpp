/*
https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/

Macros :
A macro is a piece of code in a program that is replaced by the value of the macro. Macro is defined by #define directive.
Whenever a macro name is encountered by the compiler, it replaces the name with the definition of the macro.
Macro definitions need not be terminated by a semi-colon(;).
*/
#include <bits/stdc++.h>
using namespace std;

// 1.  Object-like Macros
#define LIMIT 10
#define AREA(l, b) (l * b)

// 2.  Chain Macros
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 10

// 3. Multi-line Macros
#define ARR 1, 2, 3
// #define ARR 1, \
//             2, \ 
// 3

// 4. Function-like Macro
#define min(a, b) (((a) > (b)) ? (b) : (a))

int main()
{
    cout << "The value of the limit is " << LIMIT << endl;
    cout << "Area of quadrilateral of dimensions 10,20 = " << AREA(10, 20) << endl;
    cout << "Virat Kholi had " << INSTAGRAM << "M+ instagram follower!" << endl;
    int arr[] = {ARR};

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Min of 9 and 10 is " << min(9, 10) << endl;
}