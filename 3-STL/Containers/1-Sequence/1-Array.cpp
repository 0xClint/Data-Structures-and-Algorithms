#include <iostream>
#include <array>
using namespace std;

int main()
{
    int arr1[3] = {1, 2, 3};

    array<int, 4> arr2 = {1, 2, 3, 4};

    cout << "Size of arr = " << arr2.size() << endl;
    cout << "Element at 3rd index = " << arr2.at(2) << endl;
    cout << "Empty or not = " << arr2.empty() << endl;
    cout << "first element = " << arr2.front() << endl;
    cout << "last element = " << arr2.back() << endl;
}