#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<int> g[N];
vector<bool> visited(N, false);
vector<int> dist(N, 0);

void dfs(int src)
{
    cout << src << " ";
    visited[src] = true;

    for (int v : g[src])
    {
        if (visited[v])
            continue;

        dfs(v);
    }
};

void bfs(int src)
{
    queue<int> qu;
    qu.push(src);
    visited[src] = true;
    dist[src] = 0;
    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();

        cout << u << " ";
        for (int v : g[u])
        {
            if (visited[v])
                continue;
            qu.push(v);
            dist[v] = dist[u] + 1;
            visited[v] = true;
        }
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);

    cout << endl
         << dist[5];
    return 0;
}
