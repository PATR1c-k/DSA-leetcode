bool searchInBST(BinaryTreeNode<int> *root, int x)
{
    // Write your code here.
    // base case
    if (root == NULL)
    {
        return false;
    }

    BinaryTreeNode<int> *temp = root;

    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }

        if (temp->data > x)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }

    return false;
}