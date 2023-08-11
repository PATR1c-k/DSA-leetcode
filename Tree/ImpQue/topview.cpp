#include <map>
vector<int> getTopView(TreeNode<int> *root)
{
    vector<int> ans;

    if (root == NULL)
    {
        return ans;
    }

    map<int, int> topNode;
    queue<pair<TreeNode<int> *, int>> q;

    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<TreeNode<int> *, int> temp = q.front();
        q.pop();

        TreeNode<int> *frontNode = temp.first;
        int HD = temp.second;

        // if one value is present for HD then do nothing
        if (topNode.find(HD) == topNode.end())
        {
            topNode[HD] = frontNode->val;
        }

        if (frontNode->left)
        {
            q.push(make_pair(frontNode->left, HD - 1));
        }

        if (frontNode->right)
        {
            q.push(make_pair(frontNode->right, HD + 1));
        }
    }

    for (auto i : topNode)
    {
        ans.push_back(i.second);
    }

    return ans;
}