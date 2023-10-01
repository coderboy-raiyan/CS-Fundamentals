#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;

vector<vector<char>> g(N, vector<char>(N));
vector<vector<bool>> visited(N, vector<bool>(N, false));
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
};

void dfs(int i, int j)
{
    if (!isValid(i, j))
    {
        return;
    };
    if (g[i][j] == '#')
    {
        return;
    };
    if (visited[i][j])
    {
        return;
    };
    visited[i][j] = true;
    for (auto it : directions)
    {
        dfs(i + it.first, j + it.second);
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
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
                continue;
            dfs(i, j);
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
