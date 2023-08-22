
#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];
vector<bool> visited(N, false);
vector<int> parent(N, -1);
vector<int> dist(N, 0);

void bfs(int src)
{
    queue<int> q;
    dist[src] = 0;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int u = q.front();
        // cout << u << " ";
        q.pop();
        for (int v : g[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            dist[v] = dist[u] + 1;
            parent[v] = u;
            visited[v] = true;
        }
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
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);
    if (!visited[n])
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    int curr = n;
    vector<int> roads;
    while (curr != -1)
    {
        roads.push_back(curr);
        curr = parent[curr];
    }
    cout << roads.size() << endl;
    reverse(roads.begin(), roads.end());
    for (int computer : roads)
    {
        cout << computer << " ";
    }

    return 0;
}
