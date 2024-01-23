#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
            cout << "Stack overflow!" << endl;
    }

    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "Stack underflow!" << endl;
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack s(5);

    if (s.isEmpty())
        cout << "Stack is empty!" << endl;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top element of stack is " << s.peek() << endl;
    s.pop();
    cout << "Top element of stack is " << s.peek() << endl;
}
