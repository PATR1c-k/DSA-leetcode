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

    ~Node()
    {
        int val = this->data;
        if (nextNode != NULL)
        {
            delete nextNode;
            nextNode = NULL;
        }
        cout << "Memory deleted for block which was holding value of : " << val << endl;
    }
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

void deletion(Node *&head, int position)
{
    // handelling deeltion of first node (position == 1)
    if (position == 1)
    {
        Node *temp = head;
        // going to node +1
        temp->nextNode->prevNode = NULL;
        head = temp->nextNode;
        temp->nextNode = NULL;
        delete (temp);
    }
    else
    {
        // deleting middle and last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->nextNode;
            cnt++;
        }

        // prev->nextNode = curr->nextNode;
        // curr->nextNode->prevNode = prev;
        // // removing pointer mapping of deleted node
        // curr->nextNode = NULL;
        // curr->prevNode = NULL;

        curr->prevNode = NULL;
        curr->nextNode->prevNode = prev;
        prev->nextNode = curr->nextNode;
        curr->nextNode = NULL;

        delete (curr);
    }
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);

    Node *node2 = new Node(20);

    Node *node3 = new Node(30);

    Node *node4 = new Node(40);
    node1->nextNode = node2;
    node2->nextNode = node3;
    node2->prevNode = node1;
    node3->prevNode = node2;
    node3->nextNode = node4;
    node4->prevNode = node3;

    Node *head = node1;
    Node *tail = node4;

    // deletion(head, 1);
    // print(head);
    // deletion(head, 1);
    // print(head);
    // deletion(head, 1);
    // print(head);
    print(head);

    deletion(head, 3);
    // deletion(head, 2);
    print(head);
    return 0;
}