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

Node *insertIntoBST(Node *&root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        // right side mein jayega
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        insertIntoBST(root, data);
        cin >> data;
    }
}

void inOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << endl;
    inOrder(root->right);
}

// lowest of BST

int maximum(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp->data;
}

int minimum(Node *&root)
{
    // finding minimum
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp->data;
}

Node *minim(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deleteFromBST(Node *root, int val)
{
    // base case
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            // taking minimum from right side
            int mini = minim(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        // left part mein chala gaya
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else
    {
        // right part mein chala gaya
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

int main(int argc, char const *argv[])
{
    Node *root = NULL;

    cout << "Enter a data to BST" << endl;
    takeInput(root);

    // give input -> 10 8 21 7 27 5 4 3 -1
    cout << "traversed BST in Level order" << endl;
    levelOrderTraversal(root);

    cout << "Inorder" << endl;
    inOrder(root);

    cout << "Lowest of the BST is : " << minimum(root) << endl;

    cout << "Maximum of the BST is : " << maximum(root);

    // after deletion
    cout << "----------------------------------------------------------" << endl;
    root = deleteFromBST(root, 3);

    cout << "traversed BST in Level order" << endl;
    levelOrderTraversal(root);

    cout << "Inorder" << endl;
    inOrder(root);

    cout << "Lowest of the BST is : " << minimum(root) << endl;

    cout << "Maximum of the BST is : " << maximum(root);

    return 0;
}
