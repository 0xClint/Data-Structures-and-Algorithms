#include <bits/stdc++.h>
using namespace std;

/*
Dynamic Memory Allocation
Generally, we have two types of memory in our systems:

Stack memory:
It has a fixed value of size for which an array could be declared in the contiguous form.

Heap memory:
It is the memory where the array declared is not stored in a contiguous way. If we want to declare an array of size 100000, we do not have the contiguous space in the memory of the same size. We will be declaring the array using heap memory as it necessarily doesn’t require a contiguous allocation;
it will allocate the space wherever it gets and links all the memory blocks together.

Note : Global variables are stored using heap memory.

The memory declaration using heap memory is known as dynamic memory allocation,
while the one using stack is known as compile - time memory allocation.

Static Memory Allocation:
When the amount of memory to be allocated is known beforehand, i.e., it is known as Static Memory Allocation
at the time of compilation. Once the memory is allocated statically, it cannot be deallocated during the program run.
So it leads to wastage of storage space. We generally pass constants while declaring arrays.

*/

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;
    int *arr = new int[n]; // Declaration of Heap

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = getSum(arr, n);

    cout << "Ans = " << sum << endl;

    return 0;
}