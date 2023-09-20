#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int n, m;
    bool visited[100][100];
    vector<pair<int, int>> dest = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

    bool isValid(int i, int j)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    };
    int cnt = 0;
    void dfs(int i, int j, vector<vector<int>> &grid)
    {
        if (!isValid(i, j))
        {
            return;
        };
        if (grid[i][j] == 0)
        {
            return;
        };
        if (visited[i][j])
        {
            return;
        };
        visited[i][j] = true;
        cnt++;
        for (auto di : dest)
        {
            dfs(i + di.first, j + di.second, grid);
        };
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 0)
                {
                    continue;
                };
                if (visited[i][j])
                {
                    continue;
                };
                cnt = 0;
                dfs(i, j, grid);
                mx = max(cnt, mx);
            }
        }
        return mx;
    }
};

int main()
{

    return 0;
}
