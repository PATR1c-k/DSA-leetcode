#include <iostream>
using namespace std;

// 1 -> 2 -> 3 -> 4 -> 5 -> NULL

// Linked List
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

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);

    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}

void insertAtFirst(Node *&head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
};

void insertAtPosition(Node *head, int position, int data)
{
    // for first position insert
    if (position == 1)
    {
        insertAtFirst(head, data);
        return;
    }

    // traversing upto -1th position
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *fresh = new Node(data);
    fresh->next = temp->next;
    temp->next = fresh;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *reverseLL(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtFirst(head, 20);

    insertAtPosition(head, 2, 30);
    insertAtPosition(head, 3, 40);
    insertAtPosition(head, 4, 50);

    // printing whole LL
    print(head);

    cout << "\n";

    // reversing whole LL
    Node *reversedLL = reverseLL(head);
    print(reversedLL);
    return 0;
}
