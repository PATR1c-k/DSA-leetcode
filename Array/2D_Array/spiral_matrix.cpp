class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row * col - 1;

        int mid = start + (end - start) / 2;

        while (start <= end)
        {
            int element = matrix[mid / col][mid % col];

            if (element == target)
            {
                return 1;
            }

            if (element < target)
            {
                start = mid + 1;
            }
            if (element > target)
            {
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }
        return 0;
    }

    vector<long> spiralPathMatrix(vector<long> matrix, long n, long m)
    {
        vector<long> ans;
        int row = n;
        int col = m;

        int count = 0;
        int total = n * m;

        // index initialization
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n - 1;
        int endingCol = m - 1;

        while (count <= total)
        {
            // pritning starting row
            for (int Index = startingCol; count < total && Index < endingCol; Index++)
            {
                ans.push_back(matrix[startingRow][Index]);
            }
            startingRow++;
            count++;

            // printing ending col
            for (int Index = 0; count < total && Index < endingRow; Index++)
            {
                ans.push_back(matrix[endingRow][Index]);
            }
            endingCol--;
            count++;

            // printing ending row reverse
            for (int Index = endingCol; count < total && Index >= startingCol; Index--)
            {
                ans.push_back(matrix[endingRow][Index]);
            }
            endingRow--;
            count++;

            // printing starting col in reverse
            for (int Index = endingRow; count < total && Index <= startingRow; Index++)
            {
                ans.push_back(matrix[Index][startingCol]);
            }
            startingCol++;
            count++;
        }

        return ans;
    }
};