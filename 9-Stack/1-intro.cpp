#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;

    if (s.empty())
        cout << "Stack is empty!" << endl;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top element of stack is " << s.top() << endl;
    s.pop();
    cout << "Top element of stack is " << s.top() << endl;
}
