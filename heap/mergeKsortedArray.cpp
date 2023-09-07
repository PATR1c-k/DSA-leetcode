// approach 1 - without using heap

// #include <bits/stdc++.h>
// vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
// {
//     vector<int> ans;

//     for (int i = 0; i < kArrays.size(); i++)
//     {
//         for (int j = 0; j < kArrays[i].size(); j++)
//         {
//             ans.push_back(kArrays[i][j]);
//         }
//     }

//     sort(ans.begin(), ans.end());

//     return ans;
// }


// approach 2 -min using heap

#include <bits/stdc++.h>
#include <queue>

class Node
{
public:
    int data;
    int row;
    int col;

    Node(int data, int row, int col)
    {
        this->data = data;
        this->row = row;
        this->col = col;
    }
};

// need to make a compare function as here we are using Node* rather than int
class compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    };
};

vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    // making a min heap
    priority_queue<Node *, vector<Node *>, compare> minheap;

    // insert all first indexes of arrays into the heap
    for (int i = 0; i < k; i++)
    {
        Node *tmp = new Node(kArrays[i][0], i, 0);
        minheap.push(tmp);
    }

    vector<int> ans;
    // step 2 : further processing
    while (minheap.size() > 0)
    {
        Node *temp = minheap.top();
        ans.push_back(temp->data);
        minheap.pop();

        int i = temp->row;
        int j = temp->col;

        if (j + 1 < kArrays[i].size())
        {
            Node *next = new Node(kArrays[i][j + 1], i, j + 1);
            minheap.push(next);
        }
    }

    return ans;
}
