#include <iostream>
using namespace std;
#include <queue>

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

int heightOfTree(Node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

int main(int argc, char const *argv[])
{
    Node *root = NULL;
    root = buildTree(root);

    int height = heightOfTree(root);
    cout << "Height of tree is " << height;

    return 0;
}
