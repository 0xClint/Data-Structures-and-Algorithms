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

int print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

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

Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == nullptr)
        return NULL;

    Node *prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;

    return head;
}

Node *deleteTail(Node *head)
{
    cout << "HELLO" << endl;
    if (head == NULL || head->next == NULL)
        return NULL;
    cout << "HELLO" << endl;

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << "HELLO" << endl;

    Node *prev = temp->back;
    prev->next = nullptr;
    cout << "HELLO1" << endl;
    temp->back = nullptr;

    delete temp;
    return head;
}

Node *deleteKElement(Node *head, int k)
{
    if (head == NULL)
        return NULL;

    int cnt = 0;
    Node *kNode = head;

    while (kNode != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        kNode = kNode->next;
    }

    Node *front = kNode->next;
    Node *prev = kNode->back;

    if (front == NULL && prev == NULL)
    {
        return NULL;
    }
    else if (prev == NULL)
    {
        return deleteHead(head);
    }
    else if (front == NULL)
    {
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;

    kNode->next = nullptr;
    kNode->back = nullptr;

    return head;
}

Node *insertHead(Node *head, int element)
{
    if (head == NULL)
        return new Node(element);

    Node *newNode = new Node(element, head, nullptr);
    head->back = newNode;
    return newNode;
}

Node *insertAfterTail(Node *head, int element)
{
    if (head == NULL)
        return NULL;

    Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    Node *newNode = new Node(element, nullptr, temp);
    temp->next = newNode;

    return head;
}

Node *insertBeforeTail(Node *head, int element)
{
    if (head->next == NULL)
        return insertHead(head, element);

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *prev = temp->back;
    Node *newNode = new Node(element, temp, prev);

    temp->back = newNode;
    cout << "HELLO";
    prev->next = newNode;

    return head;
}

Node *insertBeforeKElement(Node *head, int k, int val)
{
    if (k == 1)
        return insertHead(head, val);

    Node *temp = head;
    int cnt(0);

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }

    Node *previous = temp->back;

    Node *newNode = new Node(val, temp, previous);

    previous->next = newNode;
    temp->back = newNode;

    return head;
}
int main()
{
    vector<int> arr = {5, 67, 23, 71};

    Node *head = convertArr2DLL(arr);

    // head = deleteHead(head);

    // head = deleteKElement(head, 4);

    // head = insertHead(head, 11);

    // head = insertBeforeTail(head, 411);

    head = insertBeforeKElement(head, 3, 1001);
    print(head);
}