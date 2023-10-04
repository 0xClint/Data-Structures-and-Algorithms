#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // fixed vector with length 5 and contains all element as  1;
    vector<int> v1(5, 1);
    cout << "print v1" << endl;
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    // Dynamic vector
    vector<int> v2;

    cout << "Capacity -> " << v2.capacity() << endl;

    v2.push_back(1);
    cout << "Capacity -> " << v2.capacity() << endl;

    v2.push_back(2);
    cout << "Capacity -> " << v2.capacity() << endl;

    v2.push_back(3);
    cout << "Capacity -> " << v2.capacity() << endl;

    v2.push_back(4);
    v2.push_back(5);

    for (int i : v2)
        cout << i << " ";
    cout << endl;

    v2.pop_back();
    cout << "after push back" << endl;

    for (int i : v2)
        cout << i << " ";
    cout << endl;

    // Size - Total no. of element in  that vector
    // Capacity - Total amount of allocation capacity of that vector
    cout << "Capacity -> " << v2.capacity() << endl;
    cout << "Size -> " << v2.size() << endl;
    cout << "Front element -> " << v2.front() << endl;
    cout << "Back Element -> " << v2.back() << endl;
    v2.erase(v2.begin(), v2.begin() + 1);

    for (int i : v2)
        cout << i << " ";
    cout << endl;
}