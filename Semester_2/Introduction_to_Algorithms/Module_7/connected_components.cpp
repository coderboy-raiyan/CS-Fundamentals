#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1000];
bool visited[1000];

int depth[1000];
int height[1000];

void dfs(int s)
{
    visited[s] = true;
    for (int v : adj[s])
    {
        if (visited[v])
        {
            continue;
        }
        depth[v] = depth[s] + 1;
        dfs(v);
        height[s] = max(height[s], height[v] + 1);
    }
};

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (visited[v])
            {
                continue;
            }
            q.push(v);
            visited[v] = true;
        };
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    };

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            continue;
        }
        bfs(i);
        cnt++;
    }
    cout << "Number of components : " << cnt;

    return 0;
}
