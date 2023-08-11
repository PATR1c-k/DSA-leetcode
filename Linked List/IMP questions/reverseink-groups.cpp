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
    };
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *kReverse(Node *&head, int k)
{
    // base case
    if (head == NULL)
    {
        return NULL;
    }

    // step-1 = reverse first k nodes iteratively
    Node *prev = NULL;
    Node *next = NULL;
    Node *curr = head;

    int cnt = 0;
    while (curr != NULL && cnt < k)
    {
        next = curr->next;
        curr->next = prev;
        // now moving forward;
        prev = curr;
        curr = next;
        cnt++;
    }

    // step2 recurrsion work
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }

    // step3 - return head of whole ll
    return prev;
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);

    // mapping
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    Node *head = node1;
    print(head);

    Node *newHead = kReverse(head, 2);
    print(newHead);
    return 0;
}
