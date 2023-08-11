void inOrder(BinaryTreeNode<int> *root, vector<int> &ans)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LNR
    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}

bool validateBST(BinaryTreeNode<int> *root)
{
    // Write your code here
    vector<int> ans;

    inOrder(root, ans);

    // check inOrder is sorted or not;
    return is_sorted(ans.begin(), ans.end());
}