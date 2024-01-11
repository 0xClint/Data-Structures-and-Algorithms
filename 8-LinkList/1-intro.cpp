#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
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

int getLength(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main()
{
    vector<int> arr = {10, 1, 2, 3, 4};

    Node *head = convertArr2LL(arr);
    Node *temp = head;

    cout << "length of LL = " << getLength(head) << endl;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}