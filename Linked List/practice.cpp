#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode;

    Node(int data)
    {
        this->data = data;
        this->nextNode = NULL;
    }
};

void insertFirst(Node *&head, int data)
{
    // creating a temp node
    Node *temp = new Node(data);
    // inserting
    temp->nextNode = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // creting a node
    Node *temp = new Node(data);
    // Inserting at end;
    tail->nextNode = temp;
    temp->nextNode = NULL;
    tail = temp;
}

void insertAtPosition(Node *&head, int position, int data)
{
    // for first poistion insert
    if (position == 1)
    {
        insertFirst(head, data);
        return;
    }

    // traversing upto position -1 node
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->nextNode;
        cnt++;
    }

    // creating a fresh node
    Node *fresh = new Node(data);
    fresh->nextNode = temp->nextNode;
    temp->nextNode = fresh;
}

// trversing LinkedList
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nextNode;
    }
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(1);
    // cout << head->data << " | " << head->nextNode << endl;

    // insertFirst(head, 2);
    // cout << head->data << " | " << head->nextNode << endl;

    // insertFirst(head, 20);
    // print(head);

    // ----------------------------------------------------insertAtEnd;
    Node *head = node1;
    Node *tail = node1;
    insertAtTail(tail, 20);
    insertFirst(head, 3);

    insertAtPosition(head, 3, 200);
    // insertAtPosition(head, 2, 100);

    // insertAtPosition(head, 1, 30);
    print(head);

    return 0;
}
