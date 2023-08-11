#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node that has data" << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        // list is empty;
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        Node *curr = tail;
        // now we will travers upto we dont det that elementnode
        while (curr->data != element)
        {
            curr = curr->next;
        };
        // now current is at that position (element found)
        // mapping
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deletingNode(Node *&tail, int target)
{
    if (tail == NULL)
    {
        // empty ll
        cout << "List is already Empty" << endl;
        return;
    }
    else
    {
        // empty case

        // assuming valu is in linked list
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != target)
        {
            prev = curr;
            curr = curr->next;
        };

        prev->next = curr->next;

        // only one node
        if (curr == prev)
        {
            tail = NULL;
        }

        // greater than equal to 2
        if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    };
}

// traversing a circular linked list
void print(Node *tail)
{
    Node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);
    // Node *node2 = new Node(20);
    // Node *node3 = new Node(30);
    // Node *node4 = new Node(40);

    // node1->next = node2;
    // node2->next = node3;
    // node3->next = node4;
    // node4->next = node1;

    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    // insertNode(tail, 5, 7);
    // print(tail);

    // insertNode(tail, 3, 4);
    // print(tail);

    // insertNode(tail, 5, 10);
    // print(tail);

    // deletingNode(tail, 5);
    // print(tail);

    deletingNode(tail, 5);
    print(tail);
    return 0;
}
