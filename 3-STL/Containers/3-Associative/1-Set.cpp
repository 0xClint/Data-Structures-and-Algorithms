#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    // Set alway arranges all the elements in sorted way
    // We can't delete any elements from it
    // insert, find, earse, count --> O(log(n))
    // size, begin, end --> O(1)

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(7);

    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    s.erase(s.begin());
    for (int i : s)
    {
        cout << i << endl;
    }

    set<int>::iterator it = s.begin();
    it++;
    cout << endl;
    s.erase(it);
    for (int i : s)
    {
        cout << i << endl;
    }

    cout << "5 is present or not -> " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);
    // Gives the refrence respective to that find element

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}