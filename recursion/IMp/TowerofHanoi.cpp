class Solution
{
public:
    bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return 1;
        }
        return 0;
    }

    void solve(vector<vector<int>> &mat, int n, int x, int y, vector<vector<int>> &visited, vector<string> &ans, string path)
    {
        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // 4 moves
        // down
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('D');
            solve(mat, n, newx, newy, visited, ans, path);
            path.pop_back();
        }

        // right
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('R');
            solve(mat, n, newx, newy, visited, ans, path);
            path.pop_back();
        }

        // left
        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('L');
            solve(mat, n, newx, newy, visited, ans, path);
            path.pop_back();
        }

        // up
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('U');
            solve(mat, n, newx, newy, visited, ans, path);
            path.pop_back();
        }
        visited[x][y] = 0;
    }

    vector<string> findPath(vector<vector<int>> &mat)
    {
        vector<string> ans;
        int n = mat.size();
        int srcx = 0;
        int srcy = 0;

        if (mat[srcx][srcy] == 0)
        {
            return ans;
        }

        // initialising visited array
        vector<vector<int>> visited = mat;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        string path = "";
        solve(mat, n, srcx, srcy, visited, ans, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};