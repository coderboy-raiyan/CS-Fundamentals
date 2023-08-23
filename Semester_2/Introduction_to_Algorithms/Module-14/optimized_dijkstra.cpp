#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int N = 1e3 + 5;
vector<pii> g[N];
vector<int> dist(N, INT_MAX);
vector<bool> visited(N, false);

void dijkstra(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[src] = 0;
    pq.push({dist[src], src});
    while (!pq.empty())
    {
        int uNode = pq.top().second;
        int uCost = pq.top().first;
        pq.pop();
        visited[uNode] = true;

        for (pii vpair : g[uNode])
        {
            int v = vpair.second;
            int w = vpair.first;

            if (visited[v])
                continue;

            if (uCost + w < dist[v])
            {
                dist[v] = uCost + w;
                pq.push({dist[v], v});
            }
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
