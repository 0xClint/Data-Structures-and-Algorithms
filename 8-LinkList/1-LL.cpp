

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
Node *reverseLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *newHead = reverseLL(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = NULL;

    return newHead;
}

int main()
{
    vector<int> arr = {1, 5, 2};

    Node *head = convertArr2LL(arr);
    // Traverse LL
    // tranverseLL(head);

    // Write Your Code Here.
    Node *current = reverseLL(head);
    int carry = 1;

    while (current != NULL)
    {
        cout << "HELLO";
        if (carry == 0)
            break;

        int sum = carry + current->data;
        current->data = sum % 10;
        carry = sum / 10;

        current = current->next;
    }
    reverseLL(head);

    if (carry == 1)
    {
        tranverseLL(new Node(1, head));
    }
    tranverseLL(head);
}
