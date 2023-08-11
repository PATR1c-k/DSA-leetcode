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

int getLength(Node *head)
{
    int len = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

//my approach (easy)
Node *middleOfLL(Node *head)
{

    Node *temp = head;
    int len = getLength(head);

    int mid = len / 2; // 2.5 = 2
    // but according to need we need mid+1th term so;
    // traversing upto mid+1 position
    int cnt = 1;
    while (cnt <= mid)
    {
        temp = temp->next;
        cnt++;
    }

    return temp;
}

// approach 2
 

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

    Node *ans = middleOfLL(head);
    cout << "middle term having data:" << ans->data << endl;

    cout << getLength(head) << endl;
    return 0;
}
