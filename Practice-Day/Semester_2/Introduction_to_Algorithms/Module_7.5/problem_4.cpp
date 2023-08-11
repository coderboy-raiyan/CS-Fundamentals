#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

vector<int> adj[N];
bool visited[N];
int level[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
        {
            continue;
        }
        dfs(v);
    }
};
void dfs2(int u)
{
    visited[u] = true;
    cout << u << " ";
    for (int v : adj[u])
    {
        if (visited[v])
        {
            continue;
        }
        dfs2(v);
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
    }

    vector<int> comp;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            continue;
        };
        dfs(i);
        comp.push_back(i);
    }
    memset(visited, false, sizeof(visited));
    for (int v : comp)
    {
        if (visited[v])
        {
            continue;
        }
        cout << "component nodes : ";
        dfs2(v);
        cout << endl;
    }

    return 0;
}
