void Inorder(BinaryTreeNode<int> *root, vector<int> &ans)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LNR
    Inorder(root->left, ans);
    ans.push_back(root->data);
    Inorder(root->right, ans);
}

bool twoSumInBST(BinaryTreeNode<int> *root, int target)
{
    vector<int> ans;
    Inorder(root, ans);

    int i = 0;
    int j = ans.size() - 1;

    while (i < j)
    {
        if (ans[i] + ans[j] == target)
        {
            return true;
        }
        else if (ans[i] + ans[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return false;
}