bool searchInBST(BinaryTreeNode<int> *root, int x)
{
    // Write your code here.
    // base case
    if (root == NULL)
    {
        return false;
    }

    if (root->data == x)
    {
        return true;
    }

    // recurssive call
    if (x > root->data)
    {
        return searchInBST(root->right, x);
    }
    if (x < root->data)
    {
        return searchInBST(root->left, x);
    }
}