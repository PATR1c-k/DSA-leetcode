class Solution
{
public:
    void LeftTraversal(Node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL || (root->left == NULL && root->right == NULL))
        {
            return;
        }

        ans.push_back(root->data);

        if (root->left)
        {
            LeftTraversal(root->left, ans);
        }
        else
        {
            LeftTraversal(root->right, ans);
        }
    }

    void LeafNodeTraversal(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }

        // using LNR and adding only leaf nodes
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
            return;
        }

        LeafNodeTraversal(root->left, ans);
        LeafNodeTraversal(root->right, ans);
    }

    void traverseRightMost(Node *root, vector<int> &ans)
    {
        if (root == NULL || (root->left == NULL && root->right == NULL))
        {
            return;
        }

        if (root->right)
        {
            traverseRightMost(root->right, ans);
        }
        else
        {
            traverseRightMost(root->left, ans);
        }

        ans.push_back(root->data);
    }

    vector<int> boundary(Node *root)
    {
        vector<int> ans;

        // base case
        if (root == NULL)
        {
            return ans;
        }

        ans.push_back(root->data);

        // left part
        LeftTraversal(root->left, ans);

        // left leaf
        LeafNodeTraversal(root->left, ans);
        // right leaf
        LeafNodeTraversal(root->right, ans);

        // traverseRightMOst
        traverseRightMost(root->right, ans);

        return ans;
    }
};