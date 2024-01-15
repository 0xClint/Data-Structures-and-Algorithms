#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next, *back;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }
    Node(int data, Node *next, Node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }
};

Node *convertArr2DLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev->next);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

int print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *reverseLL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head;
    Node *previous = nullptr;

    while (temp != NULL)
    {
        previous = temp->back;
        temp->back = temp->next;
        temp->next = previous;

        temp = temp->back;
    }

    cout << previous->data << endl;
    return previous->back;
}

Node *reverseLLRe(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *newHead = reverseLLRe(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = nullptr;

    return newHead;
}
int main()
{

    vector<int> arr = {1,
                       2,
                       3,
                       4,
                       5,
                       6,
                       7};

    Node *head = convertArr2DLL(arr);
    print(head);
    cout << endl;
    head = reverseLLRe(head);
    print(head);
}