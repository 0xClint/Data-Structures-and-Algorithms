https : // www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
        class Solution
{
private:
    bool isSafe(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> visited)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
            return true;
        else
            return false;
    }
    void solve(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> visited, string path, vector<string> &ans)
    {

        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // down
        int xnew = x + 1;
        int ynew = y;
        if (isSafe(m, n, xnew, ynew, visited))
        {
            path.push_back('D');
            solve(m, n, xnew, ynew, visited, path, ans);
            path.pop_back();
        }

        // left
        xnew = x;
        ynew = y - 1;
        if (isSafe(m, n, xnew, ynew, visited))
        {
            path.push_back('L');
            solve(m, n, xnew, ynew, visited, path, ans);
            path.pop_back();
        }

        // right
        xnew = x;
        ynew = y + 1;
        if (isSafe(m, n, xnew, ynew, visited))
        {
            path.push_back('R');
            solve(m, n, xnew, ynew, visited, path, ans);
            path.pop_back();
        }

        // up
        xnew = x - 1;
        ynew = y;
        if (isSafe(m, n, xnew, ynew, visited))
        {
            path.push_back('U');
            solve(m, n, xnew, ynew, visited, path, ans);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> ans;

        if (m[0][0] == 0)
            return ans;

        string path = "";
        vector<vector<int>> visited = m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        solve(m, n, 0, 0, visited, path, ans);
        sort(m.begin(), m.end());
        return ans;
    }
};