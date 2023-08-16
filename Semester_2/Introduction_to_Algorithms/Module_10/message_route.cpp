#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];
vector<bool> visited(N, false);
vector<int> level(N);
vector<int> parent(N, -1);

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : g[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
            parent[v] = u;
            level[v] = level[u] + 1;
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
        g[u].push_back(v);
        g[v].push_back(u);
    };
    bfs(1);
    int curr = n;
    vector<int> paths;
    while (curr != -1)
    {
        paths.push_back(curr);
        curr = parent[curr];
    };
    cout << paths.size() << endl;
    reverse(paths.begin(), paths.end());
    for (int path : paths)
    {
        cout << path << " ";
    }
    return 0;
}
