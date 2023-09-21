#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
int n, m;
vector<vector<char>> g(N);
vector<vector<bool>> visited(N, vector<bool>(N, false));

vector<pair<int, int>> dest = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int i, int j)
{
    if (!isValid(i, j))
    {
        return;
    }
    if (g[i][j] == '#')
    {
        return;
    };
    if (visited[i][j])
    {
        return;
    }
    visited[i][j] = true;
    for (auto d : dest)
    {
        dfs(i + d.first, j + d.second);
    };
};

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            g[i].push_back(c);
        }
    };
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '#')
            {
                continue;
            };
            if (visited[i][j])
            {
                continue;
            };
            cnt++;
            dfs(i, j);
        }
    };
    cout << cnt;
    return 0;
}
