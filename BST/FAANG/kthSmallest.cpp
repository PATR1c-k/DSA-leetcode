void inOrder(BinaryTreeNode<int> *root, vector<int> &ans)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // lnr
    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}

int kthSmallest(BinaryTreeNode<int> *root, int k)
{
    vector<int> ans;
    inOrder(root, ans);

    // excess
    if ((k - 1) >= ans.size())
    {
        return -1;
    }

    int finalAns = ans[k - 1];
    return finalAns;
}

// approach 2
// best case
int solve(Node* root,int i,int k)
{
    // base case
    if(root == NULL)
    {
        return -1;
    }

    // L
    int left = solve(root->left,i,k);
    if (left!= -1)
    {
        return left;
    }
    
    // n
    i++;
    if (i == k)
    {
        return i;
    }

    // r
    return solve(root->right,i,k);
    
    
}

int kthSmallest(Node* root,int k)
{
    i = 0;
    solve(root,i,k);
    return i;
}