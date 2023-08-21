class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0;
        int j = height.size() - 1;
        int maxArea = 0;

        while (i < j)
        {
            int ih = height[i];
            int jh = height[j];

            int min_height = min(jh, ih);
            maxArea = max(maxArea, min_height * (j - i));
            if (ih < jh)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxArea;
    }
};