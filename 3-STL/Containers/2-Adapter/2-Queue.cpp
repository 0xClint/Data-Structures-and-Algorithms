#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<string> q;
    q.push("Ramesh");
    q.push("Ganesh");
    q.push("Rajesh");
    cout << "Size = " << q.size() << endl;

    cout << "First Element = " << q.front() << endl;
    cout << "last Element = " << q.back() << endl;
    q.pop();
    cout << "After pop " << endl;
    cout << "Top Element = " << q.front() << endl;
    cout << "Is empty = " << q.empty() << endl;
}