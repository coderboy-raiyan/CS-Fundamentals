#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<string> g;
bool visited[N][N];
vector<pair<int, int>> direc = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
int n, m;

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
    }
    if (visited[i][j])
        return;
    visited[i][j] = true;

    for (auto it : direc)
    {
        dfs(i + it.first, j + it.second);
    }
};

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        g.push_back(s);
    };
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '#')
                continue;
            if (visited[i][j])
                continue;
            dfs(i, j);
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
