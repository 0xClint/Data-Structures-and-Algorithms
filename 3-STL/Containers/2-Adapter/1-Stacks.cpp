#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;
    s.push("Ramesh");
    s.push("Ganesh");
    s.push("Rajesh");
    cout << "Size = " << s.size() << endl;

    cout << "Top Element = " << s.top() << endl;
    s.pop();
    cout << "After pop " << endl;
    cout << "Top Element = " << s.top() << endl;
    cout << "Is empty = " << s.empty() << endl;
}