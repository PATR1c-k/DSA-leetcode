void Inorder(TreeNode<int> *root, vector<int> &ans)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    Inorder(root->left, ans);
    ans.push_back(root->data);
    Inorder(root->right, ans);
}

TreeNode<int> *makeBalancedBST(int s, int e, vector<int> ans)
{
    if (s > e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;
    TreeNode<int> *root = new TreeNode<int>(ans[mid]);

    root->left = makeBalancedBST(s, mid - 1, ans);
    root->right = makeBalancedBST(mid + 1, e, ans);

    return root;
}

TreeNode<int> *balancedBst(TreeNode<int> *root)
{
    vector<int> list;
    Inorder(root, list);

    return makeBalancedBST(0, list.size() - 1, list);
}