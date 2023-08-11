#include <iostream>
#include <queue>
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

Node *buildBinaryTree(Node *root)
{
    // base case
    cout << "Enter a data for Node: ";
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter a data for the Left Node of " << root->data << endl;
    root->left = buildBinaryTree(root->left);
    cout << "Enter a data for the right Node of " << root->data << endl;
    root->right = buildBinaryTree(root->right);

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
            cout << endl;
            if (!q.empty())
            {
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

void Inorder(Node *root)
{
    // LNR
    if (root == NULL)
    {
        return;
    }

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void preOrder(Node *root)
{
    // LRN
    if (root == NULL)
    {
        return;
    }

    preOrder(root->left);
    preOrder(root->right);
    cout << root->data << " ";
}

void postOrder(Node *root)
{
    // NLR
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    postOrder(root->left);
    postOrder(root->right);
}

int main(int argc, char const *argv[])
{
    Node *root = NULL;
    // build binary tree;
    // 1 2 7 5 -1 -1 -1 11 -1 -1 3 17 -1 -1 -1
    root = buildBinaryTree(root);

    // traversal
    levelOrderTraversal(root);

    // Inorder
    Inorder(root);
    cout << endl;

    // preOrder
    preOrder(root);
    cout << endl;

    postOrder(root);
    return 0;
}
