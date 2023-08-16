#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int N = 1e5 + 5;
const int INF = 1e9 + 10;
vector<pii> g[N];
vector<bool> visited(N, false);
vector<int> dist(N, INF);

void bfs(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[src] = 0;
    pq.push({dist[src], src});

    while (!pq.empty())
    {
        int u = pq.top().second;

        pq.pop();
        visited[u] = true;

        for (pii vpair : g[u])
        {
            int v = vpair.second;
            int w = vpair.first;

            if (visited[v])
                continue;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            };
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({w, v});
        // g[v].push_back({w, u});
    };
    int s, d;
    cin >> s >> d;
    bfs(s);
    cout << dist[d];

    return 0;
}
