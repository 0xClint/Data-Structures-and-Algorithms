#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    list<int> l2(5, 100);
    cout << "Print l2 " << endl;
    for (int i : l2)
        cout << i << " ";
    cout << endl;

    cout << "Print l " << endl;
    l.push_back(1);
    l.push_front(2);

    for (int i : l)
        cout << i << " ";
    cout << endl;

    l.erase(l.begin());
    cout << "after earse" << endl;

    for (int i : l)
        cout << i << " ";
    cout << endl;

    cout << "size of list " << l.size() << endl;
}