void Inorder(TreeNode<int> *root, vector<int> &sorted)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LNR
    Inorder(root->left, sorted);
    sorted.push_back(root->data);
    Inorder(root->right, sorted);
}

TreeNode<int> *flatten(TreeNode<int> *root)
{
    // Write your code here
    vector<int> sorted;
    Inorder(root, sorted);
    int n = sorted.size();

    TreeNode<int> *newRoot = new TreeNode<int>(sorted[0]);

    TreeNode<int> *curr = newRoot;

    // 2nd step

    for (int i = 1; i < n; i++)
    {
        TreeNode<int> *temp = new TreeNode<int>(sorted[i]);

        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }

    // 3rd step
    curr->left = NULL;
    curr->right = NULL;
    return newRoot;
}