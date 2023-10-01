#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

const int N = 1e5 + 5;

vector<pii> g[N];
vector<bool> visited(N, false);
vector<int> dist(N, LONG_MAX);

void dijkstra(int s)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[s] = 0;
    pq.push({dist[s], s});

    while (!pq.empty())
    {
        pii pu = pq.top();
        int u = pu.second;
        pq.pop();
        visited[u] = true;

        for (auto pv : g[u])
        {
            int w = pv.first;
            int v = pv.second;

            if (visited[v])
                continue;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
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

    return 0;
}
