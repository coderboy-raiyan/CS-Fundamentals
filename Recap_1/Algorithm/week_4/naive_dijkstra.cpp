#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
const int N = 1e3 + 5;
vector<pii> g[N];
vector<int> dist(N, INT_MAX);

void dijkstra(int src)
{
    queue<pii> qu;
    dist[src] = 0;
    qu.push({dist[src], src});
    while (!qu.empty())
    {
        pii pu = qu.front();
        int u = pu.second;

        qu.pop();

        for (pii pv : g[u])
        {
            int v = pv.second;
            int w = pv.first;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                qu.push({dist[v], v});
            }
        }
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({w, v});
        g[v].push_back({w, u});
    }
    dijkstra(1);
    cout << dist[n];

    return 0;
}
