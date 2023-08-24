#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int N = 1e3 + 5;
vector<vector<char>> g(N);
bool visited[N][N];
int n, m;

vector<pii> dest = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int cnt = 0;

void dfs(int i, int j)
{
    if (!isValid(i, j))
    {
        return;
    }
    if (g[i][j] == '-')
        return;

    if (visited[i][j])
        return;
    cnt++;
    visited[i][j] = true;
    for (pii vapir : dest)
    {
        int ci = vapir.first;
        int cj = vapir.second;

        dfs(i + ci, j + cj);
    }
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
    }

    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '-')
                continue;
            if (visited[i][j])
                continue;
            dfs(i, j);
            mn = min(mn, cnt);
            cnt = 0;
        }
    }

    if (mn != INT_MAX)
    {
        cout << mn;
    }
    else
    {
        cout << -1;
    }

    return 0;
}
