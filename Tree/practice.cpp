#include <iostream>
#include <vector>
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

Node *buildTree(Node *root)
{
    cout << "Enter a value for node: ";
    int data;
    cin >> data;
    root = new Node(data);

    // base case
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter a data for Left of " << root->data << endl;
    root->left = buildTree(root->left);
    cout << "Enter a data for Right of " << root->data << endl;
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

void inOrder(Node *root)
{
    // LNR
    // base case
    if (root == NULL)
    {
        return;
    }

    // recursive calls
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    // NLR
    // base case
    if (root == NULL)
    {
        return;
    }

    // recursive calls
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    // LRN
    // base case
    if (root == NULL)
    {
        return;
    }

    // recursive calls
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main(int argc, char const *argv[])
{
    Node *root = NULL;

    // Building a tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);

    cout << "LevelOrderTraversal: " << endl;
    levelOrderTraversal(root);

    cout << "Inorder: ";
    inOrder(root);

    cout << "PreOrder: ";
    preOrder(root);

    cout << "PostOrder: ";
    postOrder(root);
    return 0;
}
