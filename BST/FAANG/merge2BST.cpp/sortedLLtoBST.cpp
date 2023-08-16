
TreeNode *sortedLLtoBST(TreeNode *head, int n)
{
    // base case
    if (n <= 0 || head == NULL)
    {
        return NULL;
    }

    TreeNode *left = sortedLLtoBST(head, n / 2);

    TreeNode *root = head;
    root->left = left;

    head = head->next;

    root->right = sortedLLtoBST(head, n - n / 2 - 1);
    return root;
}