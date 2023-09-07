// 0-based indexing done here.

class Solution
{
public:
    void heapify(vector<int> &arr, int i, int n)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest])
        {
            largest = left;
        }

        if (right < n && arr[right] > arr[largest])
        {
            largest = right;
        }

        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, largest, n);
        };
    }

    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        // step1 : merge both arrays into single array
        vector<int> ans;

        for (auto i : a)
        {
            ans.push_back(i);
        }

        for (auto i : b)
        {
            ans.push_back(i);
        }

        // use array ans and build heapify
        int size = ans.size();
        for (int i = (size / 2) - 1; i >= 0; i--)
        {
            heapify(ans, i, size);
        }

        // for(int i=0;i<size;i++)
        // {
        //     cout<<ans[i]<<" ";
        // }

        return ans;
    }
};