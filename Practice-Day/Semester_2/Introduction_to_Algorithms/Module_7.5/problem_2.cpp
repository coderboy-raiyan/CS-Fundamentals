#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1000];
bool visited[1000];
int level[1000];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    level[u] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (visited[v])
            {
                continue;
            };
            level[v] = level[u] + 1;
            q.push(v);
            visited[v] = true;
        }
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
    bfs(1);
    int q;
    cin >> q;
    cout << level[q] << endl;
    return 0;
}
