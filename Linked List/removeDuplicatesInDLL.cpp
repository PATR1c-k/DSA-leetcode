#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    // non empty list
    Node *curr = head;

    while (curr != NULL)
    {
        // handelling corner case at last;

        if ((curr->next != NULL) && curr->data == curr->next->data)
        {

            // delete curr->next
            Node *next_next = curr->next->next;
            Node *nodetodelete = curr->next;

            if (next_next == NULL)
            {
                delete nodetodelete;
                curr->next = NULL;
            }
            else
            {
                delete nodetodelete;
                curr->next = next_next;
                next_next->prev = curr;
            }
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(2);
    Node *node4 = new Node(3);
    Node *node5 = new Node(3);
    Node *node6 = new Node(4);

    head->next = node2;
    node2->next = node3;
    node2->prev = head;
    node3->next = node4;
    node3->prev = node2;

    node4->next = node5;
    node4->prev = node3;

    node5->next = node6;
    node5->prev = node4;

    node6->next = NULL;
    node6->prev = node5;

    removeDuplicates(head);

    // print linked list
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }

    return 0;
}
