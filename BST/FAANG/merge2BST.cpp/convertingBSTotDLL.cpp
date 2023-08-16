TreeNode *convertBSTtoDLL(TreeNode *root, TreeNode &head)
{
    // base case
    if (root == NULL)
    {
        return NULL;
    }

    convertBSTtoDLL(root->right, head);
    root->right = head;

    if (head != NULL)
    {
        head->left = root;
    }

    head = root;
    convertBSTtoDLL(root->left, head);
}