#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int N = 1e3 + 5;
const int INF = 1e9 + 10;
vector<pii> g[N];
vector<int> dist(N, INF);
vector<bool> visited(N, false);

void bfs(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[src] = 0;
    pq.push({dist[src], src});
    while (!pq.empty())
    {
        pii vpair = pq.top();
        int u = vpair.second;
        pq.pop();
        visited[u] = true;
        for (pii child : g[u])
        {
            int v = child.second;
            int w = child.first;

            if (visited[v])
                continue;

            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
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
    int s, d;
    cin >> s >> d;
    bfs(s);
    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of node  " << i << " : " << dist[i] << endl;
    }

    return 0;
}
