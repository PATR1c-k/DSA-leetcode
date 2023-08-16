
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

TreeNode *mergeToPart(TreeNode *head1, TreeNode *head2)
{
    TreeNode *head = NULL;
    TreeNode *tail = NULL;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            if (head == NULL)
            {
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else
        {
            if (head == NULL)
            {
                head = head2;
                tail = head2;
                head2 = head2->right;
            }
            else
            {
                tail->right = head2;
                head2->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
    }

    while (head1 != NULL)
    {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while (head2 != NULL)
    {
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }

    return head;
}

int countNodesinLL(TreeNode *head)
{
    // traversing whole LL
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

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

TreeNode *mergeBST(TreeNode *root1, TreeNode *root2)
{

    // converting tree in DLL
    TreeNode *head1 = NULL;
    convertBSTtoDLL(root1, head1);
    head1->left = NULL;

    TreeNode *head2 = NULL;
    convertBSTtoDLL(root2, head2);
    head2->left = NULL;

    // merge sorted LL
    TreeNode *head = mergeToPart(head1, head2);

    // convert DLL into tree
    return sortedLLtoBST(head, countNodesInLL(head));
}