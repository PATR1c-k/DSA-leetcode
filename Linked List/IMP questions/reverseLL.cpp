#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

// iterative solution
void reverseListIterative(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;

    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;

        // now we will move 2 pointer
        prev = curr;
        curr = forward;
    }

    // INresting actually at the end forward and current will be out of list. and prev will be indicating final node so
    head = prev;
}

void reverseLLRecursive(Node *&head, Node *prev, Node *curr)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;
    // recursive call
    reverseLLRecursive(head, forward, curr);
}

Node *SolveRecursively(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    reverseLLRecursive(head, prev, curr);
    return head;
}

Node *RecurssiveEasyApproach(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    };

    // recursive call
    Node *chotahead = RecurssiveEasyApproach(head->next);

    head->next->next = head;
    head->next = NULL;

    return chotahead;
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);

    // mapping
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node *head = node1;
    print(head);

    // SolveRecursively(head);
    // print(head);
    RecurssiveEasyApproach(head);
    print(head);

    return 0;
}
