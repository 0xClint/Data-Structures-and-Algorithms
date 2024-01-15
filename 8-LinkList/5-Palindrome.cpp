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

bool isPalindrome(Node *head)
{
    // write your code here
    if (head == NULL || head->next == NULL)
        return true;

    Node *fast = head;
    Node *slow = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *newHead = reverseLL(slow->next);
    Node *first = head;
    Node *second = newHead;

    while (second != NULL)
    {

        if (first->data != second->data)
        {
            reverseLL(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    reverseLL(newHead);
    return true;
}