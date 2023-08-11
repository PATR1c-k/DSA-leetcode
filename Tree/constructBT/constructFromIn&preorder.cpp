int pos(vector<int> &in, int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (in[i] == key)
            return i;
    }
    return -1;
}

TreeNode<int> *solve(vector<int> &inorder, vector<int> &preorder, int &index, int instart, int inend, int n)
{
    if (instart > inend || index >= n)
    {
        return NULL;
    }

    int element = preorder[index];
    index++;

    int position = pos(inorder, instart, inend, element);

    TreeNode<int> *root = new TreeNode<int>(element);
    root->left = solve(inorder, preorder, index, instart, position - 1, n);
    root->right = solve(inorder, preorder, index, position + 1, inend, n);

    return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
    //    Write your code here
        int preOrderIndex = 0;
        int Insize = inorder.size();
        TreeNode<int> *ans = solve(inorder, preorder, preOrderIndex, 0, Insize - 1, Insize);

        return ans;
}