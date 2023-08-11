#include <iostream>
#include <map>
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

// approach1 - selfIntiuatio
bool detectLoop(Node *tail)
{
    Node *temp = tail;

    if (temp->next != NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

// map way
bool detectLoop2(Node *head)
{
    Node *temp = head;

    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;

    while (temp != NULL)
    {
        // loop condn
        if (visited[temp] == true)
        {
            cout << "Loop is attched at node " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

bool flyodCyclicDetection(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return false;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        };

        slow = slow->next;

        if (slow == fast)
        {
            return true;
        };
    };
    return false;
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2;

    Node *head = node4;
    // if (detectLoop(tail))
    // {
    //     cout << "Loop detected" << endl;
    // }
    // else
    // {
    //     cout << "Not a loop" << endl;
    // }
    // cout << detectLoop2(head) << endl;
    cout << flyodCyclicDetection(head) << endl;

    return 0;
}
