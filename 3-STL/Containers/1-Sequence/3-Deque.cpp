#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    for (int i : d)
        cout << i << " ";
    cout << endl;

    d.pop_front();

    for (int i : d)
        cout << i << " ";
    cout << endl;

    cout << "Print 1st index of d = " << d.at(1) << endl;
    cout << "Front element -> " << d.front() << endl;
    cout << "Back Element -> " << d.back() << endl;
    cout << "Is d empty? -> " << d.empty() << endl;

    d.erase(d.begin(), d.begin() + 1);

    for (int i : d)
        cout << i << " ";
    cout << endl;
}