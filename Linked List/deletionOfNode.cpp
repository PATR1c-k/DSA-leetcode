#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *nextnode;

    Node(int data)
    {
        this->data = data;
        this->nextnode = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nextnode;
    }
    cout << endl;
};

void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->nextnode;
        // memory free
        temp->nextnode = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->nextnode;
            cnt++;
        }

        prev->nextnode = curr->nextnode;
        curr->nextnode = NULL;
        delete curr;
    }
};

int main(int argc, char const *argv[])
{
    Node *head = new Node(10);

    Node *second = new Node(20);

    Node *third = new Node(30);

    Node *fourth = new Node(40);

    head->nextnode = second;
    second->nextnode = third;
    third->nextnode = fourth;
    print(head);

    // deletion of node
    // deletionOfMiddle(head, 3);
    // deleteNode(head, 2);
    // print(head);
    // cout << "after deleting a head node Now head node should point towards second node and here : " << head->data << endl; // This test is passed.
    // // deletionOfNode(head, 2);

    // print(head);
    // cout << "after deleting a head node Now head node should point towards second node and here : " << head->data << endl; // This test is passed.

    deleteNode(head, 2);
    print(head);
    return 0;
}
