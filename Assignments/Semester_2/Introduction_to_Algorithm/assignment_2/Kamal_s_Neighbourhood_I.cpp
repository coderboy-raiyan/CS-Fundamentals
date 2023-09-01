#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
vector<int> roads;

void bfs(int u, int k)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (v == k)
            {
                roads.push_back(u);
            }
            if (visited[v])
            {
                continue;
            };
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
    int k;
    cin >> k;
    for (int i = 0; i <= 20; i++)
    {
        if (visited[i])
        {
            continue;
        };
        bfs(i, k);
    }
    cout << roads.size();

    return 0;
}
