#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode;
    Node *prevNode;

    Node(int data)
    {
        this->data = data;
        this->nextNode = NULL;
        this->prevNode = NULL;
    };
};

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nextNode;
    }
    cout << endl;
}

int getLength(Node *&head)
{
    Node *temp = head;

    int len = 0;
    while (temp != 0)
    {
        temp = temp->nextNode;
        len++;
    }
    return len;
}

void insertAtFirst(Node *&head, int data)
{
    // creating a new node
    Node *temp = new Node(data);
    // mapping
    temp->nextNode = head;
    head->prevNode = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // node creation
    Node *temp = new Node(data);
    // mapping
    tail->nextNode = temp;
    temp->prevNode = tail;
    tail = temp;
}

void insertAtPosition(Node *&head, int position, int data)
{
    // handelling position ==1
    if (position == 1)
    {
        insertAtFirst(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->nextNode;
        cnt++;
    }
    // now temp is pointing position-1
    // creating a new node
    Node *fresh = new Node(data);
    // mapping
    fresh->nextNode = temp->nextNode;
    temp->nextNode = fresh;
    fresh->prevNode = temp;

    // pointing towards after freshnode.
    temp = temp->nextNode;
    temp->prevNode = fresh;
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);

    Node *node2 = new Node(20);

    Node *node3 = new Node(30);
    node1->nextNode = node2;
    node2->nextNode = node3;
    node2->prevNode = node1;

    node3->prevNode = node2;

    Node *head = node1;
    Node *tail = node3;

    print(head);
    cout << getLength(head) << endl;

    // inserting at first
    insertAtFirst(head, 2);
    print(head);
    cout << getLength(head) << endl;

    // inserting at tail
    insertAtTail(tail, 101);
    print(head);
    cout << getLength(head) << endl;

    insertAtPosition(head, 1, 404);
    print(head);
    cout << getLength(head) << endl;

    return 0;
}
