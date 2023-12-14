#include <bits/stdc++.h>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
    *p = *p + 1;
    cout << "After *p=*p+1 inside external function, Value of *p = " << *p << endl;
    p = p + 1;
    cout << "After p=p+1 inside external function, Value of p = " << p << endl;
}

int main()
{
    int arr[10] = {10,
                   20,
                   30};

    // arr[i] = *(arr + i)
    //          OR
    // i[arr] = *(i + arr)

    // cout << "address of arr = " << arr << endl;
    // cout << "address of arr[0] = " << &arr[0] << endl;
    // cout << "value of *arr = " << *arr << endl;
    // cout << "value of *arr+1 = " << arr + 1 << endl;
    // cout << "value of *arr+1 = " << *arr + 1 << endl;
    // cout << "value of *(arr+1) = " << *(arr + 1) << endl;
    // cout << "value of *(arr+2) = " << *(arr + 2) << endl;

    // int i = 2;
    // cout << "value of i[arr] = " << i[arr] << endl;

    int *ptr = &arr[0];

    cout << "value of ptr = " << ptr << endl;
    cout << "value of *ptr = " << *ptr << endl;
    ptr++;
    cout << "value of ptr = " << ptr << endl;
    cout << "value of *ptr = " << *ptr << endl;

    char ch[6] = "abcde";
    char *c1 = &ch[0];
    char *c2 = &ch[2];

    // IMP
    cout << "Value of c1 = " << c1 << endl;
    cout << "Value of c2 = " << c2 << endl;

    int value = 5;
    int *p = &value;

    print(p);

    cout << "value of p = " << p << endl;
    update(p);
    cout << "value of p = " << p << endl;
    return 0;
}