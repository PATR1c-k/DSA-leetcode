#include <iostream>
using namespace std;
#include <vector>

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index > nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude44
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> number = {1, 2, 3, 4};

    vector<vector<int>> ans = subsets(number);

    cout << "Power set:" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
