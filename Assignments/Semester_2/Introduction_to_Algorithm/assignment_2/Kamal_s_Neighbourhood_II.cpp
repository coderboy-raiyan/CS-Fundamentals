#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

int cnt = 0;

void dfs(int u, int k)
{
    visited[u] = true;
    if (u != k)
    {
        cnt++;
    }
    for (int v : adj[u])
    {
        if (visited[v])
        {
            continue;
        }
        dfs(v, k);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int k;
    cin >> k;

    for (int i = 0; i < 20; i++)
    {
        if (visited[i])
        {
            continue;
        };
        if (i == k)
        {
            dfs(i, k);
        }
    }
    cout << cnt;

    return 0;
}
