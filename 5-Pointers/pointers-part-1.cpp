#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num = 5;

    int *ptr = &num;

    cout << "value of num = " << num << endl;
    cout << "size of num = " << sizeof(num) << endl;
    cout << "address of num = " << &num << endl;
    cout << "value of ptr = " << ptr << endl;
    cout << "size of ptr = " << sizeof(ptr) << endl;
    cout << "size of *ptr = " << sizeof(*ptr) << endl;
    cout << "value of *ptr = " << *ptr << endl;
    (*ptr)++;
    cout << "value of num = " << num << endl;
    int *qtr = ptr;
    cout << "ptr = " << ptr << " and "
         << " qtr = " << qtr << endl;
    cout << "*ptr = " << *ptr << " and "
         << " *qtr = " << *qtr << endl;

    cout << "value of ptr = " << ptr << endl;
    ptr++;
    cout << "value of ptr = " << ptr << endl;
}