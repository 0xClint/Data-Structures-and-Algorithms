#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(5);
    v.push_back(1);
    v.push_back(9);
    v.push_back(7);
    v.push_back(3);
    v.push_back(2);
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Binary Search 6 --> " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Lower Bound --> " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper Bound --> " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    rotate(v.begin(), v.begin() + 2, v.end());

    cout << "After Rotate " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    int a = 5, b = 10;

    cout << "max of 5 a=5 and b=10 --> " << max(a, b) << endl;
    cout << "min of 5 a=5 and b=10 --> " << min(a, b) << endl;
    swap(a, b);
    cout << "swap of 5 a=5 and b=10 --> a=" << a << " b=" << b << endl;

    string word = "ABCDE";
    reverse(word.begin(), word.end() - 1);
    cout << "Reverse of word ABCDE from (begins to (end-1)) --> " << word << endl;

    return 0;
}