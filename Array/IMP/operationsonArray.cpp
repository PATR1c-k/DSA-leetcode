#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        // all 0's are made but not on needed position
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
            }
        }

        // managing 0's
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[j++]);
            }
        }
        return nums;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums = {1, 2, 2, 1, 1, 0};
    vector<int> nums1 = {0, 1};
    s.applyOperations(nums1);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}
