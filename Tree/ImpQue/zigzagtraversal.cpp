class Solution
{
public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node *root)
    {
        vector<int> result;
        if (root == NULL)
        {
            return result;
        }

        queue<Node *> q;
        q.push(root);

        bool leftToright = true;

        while (!q.empty())
        {
            int size = q.size();
            vector<int> ans(size);

            // level process
            for (int i = 0; i < size; i++)
            {
                Node *frontNode = q.front();
                q.pop();

                int index = leftToright ? i : size - i - 1;
                ans[index] = frontNode->data;

                if (frontNode->left)
                {
                    q.push(frontNode->left);
                }

                if (frontNode->right)
                {
                    q.push(frontNode->right);
                }
            }

            leftToright = !leftToright;

            for (auto i : ans)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};