#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int N = 1e3 + 5;
vector<pii> g[N];
vector<int> dist(N, INT_MAX);

void dijkstra(int src)
{
    queue<int> q;
    q.push(src);
    dist[src] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto vpair : g[u])
        {
            int w = vpair.first;
            int v = vpair.second;

            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                q.push(v);
            };
        }
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({w, v});
        g[v].push_back({w, u});
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " : " << dist[i] << endl;
    }

    return 0;
}

// time complexity : O (n * e)