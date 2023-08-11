#include <queue>
#include <vector>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    };
};

Node *buildTree(Node *root)
{
    cout << "Enter a data to be set for root" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    // recuursive call for left and right side for each node.
    cout << "Enter a Left Node data for : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter a right Node data for : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse hochuka hai.
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child nodes.
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LNR
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // NLR
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LRN
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// build from levelorder


int main(int argc, char const *argv[])
{
    Node *root = NULL;

    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Printing tree in level order" << endl;
    levelOrderTraversal(root);

    cout << "Inorder: ";
    inOrder(root);

    cout << "Preorder: ";
    preOrder(root);

    cout << "PostOrder: ";
    postOrder(root);
    return 0;
}
