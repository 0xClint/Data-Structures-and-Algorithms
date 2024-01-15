

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {

        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int tranverseLL(Node *head)
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// **************** Deletion **************************

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return head;

    Node *temp = head;
    head = head->next;
    return head;
    delete temp;
}

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == nullptr)
        return head;

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
}

Node *removeKIndex(Node *head, int k)
{
    if (head == NULL)
        return head;

    Node *temp = head;
    int cnt(0);
    Node *prev = NULL;

    if (k == 1)
    {
        head = head->next;
        delete temp;
        return head;
    }
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            // prev->next = prev->next->next;
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

Node *removeElement(Node *head, int el)
{
    if (head == NULL)
        return head;

    Node *temp = head;
    Node *prev = NULL;

    if (head->data == el)
    {
        head = head->next;
        delete temp;
        return head;
    }
    while (temp != NULL)
    {
        if (temp->data == el)
        {
            // prev->next = prev->next->next;
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

// **************** Insertion **************************

Node *insertHead(Node *head, int element)
{
    return new Node(element, head);
}

Node *insertTail(Node *head, int element)
{
    if (head == NULL)
    {
        return new Node(element);
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(element);
    temp->next = newNode;
    return head;
}

Node *insertKindex(Node *head, int k, int element)
{
    if (head == NULL)
    {
        if (k == 1)
            return new Node(element);
        else
            return head;
    }

    if (k == 1)
        return new Node(element, head);

    Node *temp = head;
    int cnt(0);

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *newNode = new Node(element, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertElementBefore(Node *head, int target, int element)
{
    if (head == NULL)
        return head;

    if (head->data == target)
        return new Node(element, head);

    Node *temp = head;

    while (temp->next != NULL)
    {

        if (temp->next->data == target)
        {
            Node *newNode = new Node(element, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {5, 67, 23, 71};

    Node *head = convertArr2LL(arr);
    // Traverse LL
    tranverseLL(head);
    cout << endl;

    // deletion head
    // head = deleteHead(head);

    // delete tail
    // head = removeTail(head);

    // delete Kth index
    // head = removeKIndex(head, 2);

    // delete Element
    // head = removeElement(head, 67);

    // Insert head
    // head = insertHead(head, 111);

    // Insert Tail
    // head = insertTail(head, 190);

    // Insert Kth Index
    // head = insertKindex(head, 5, 44);

    // Insert element Before
    // head = insertElementBefore(head, 5, 99);
    tranverseLL(head);
}
