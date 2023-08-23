class Solution
{
public:
    int countNodes(struct Node *tree)
    {
        // base case
        if (tree == NULL)
        {
            return 0;
        }

        int ans = 1 + countNodes(tree->left) + countNodes(tree->right);
        return ans;
    }

    bool isCBT(struct Node *tree, int index, int cnt)
    {
        // base case
        if (tree == NULL)
        {
            return true;
        }

        if (index >= cnt)
        {
            return false;
        }
        else
        {
            bool left = isCBT(tree->left, 2 * index + 1, cnt);
            bool right = isCBT(tree->right, 2 * index + 2, cnt);

            return (left && right);
        }
    }

    bool isMaxHeap(struct Node *root)
    {
        // node is leaf
        if (root->left == NULL && root->right == NULL)
        {
            return true;
        }

        // if only left child
        if (root->right == NULL)
        {
            return (root->data > root->left->data);
        }
        else // case where both roots are present
        {
            bool left = isMaxHeap(root->left);
            bool right = isMaxHeap(root->right);

            return (left && right && (root->data > root->left->data && root->data > root->right->data));
        }
    }

    bool isHeap(struct Node *tree)
    {

        int index = 0;
        int totalCount = countNodes(tree);

        if (isCBT(tree, index, totalCount) && isMaxHeap(tree))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};