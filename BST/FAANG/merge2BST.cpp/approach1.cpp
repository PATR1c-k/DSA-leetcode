void inorder(TreeNode *root, vector<int> &list)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LNR
    inorder(root->left, list);
    list.push_back(root->data);
    inorder(root->right, list);
}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // step 1  - storing a inorders
    vector<int> list1;
    vector<int> list2;

    inorder(root1, list1);
    inorder(root2, list2);

    // mering two sorted arrays;
    for (int i = 0; i < list2.size(); i++)
    {
        list1.push_back(list2[i]);
    }

    sort(list1.begin(), list1.end());
    return list1;
}