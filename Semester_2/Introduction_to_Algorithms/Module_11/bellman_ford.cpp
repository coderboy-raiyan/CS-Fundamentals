#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = 1e9 + 10;
vector<pii> g[N];
vector<int> dist(N, INF);
int n, m;

void bellman_ford(int src)
{
    dist[src] = 0;

    for (int i = 1; i < n; i++)
    {
        for (int u = 1; u <= n; u++)
        {

            for (pii vpair : g[u])
            {
                int v = vpair.first;
                int w = vpair.second;

                if (dist[u] != INF && dist[v] > dist[u] + w)
                {
                    dist[v] = dist[u] + w;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    bellman_ford(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "D " << i << " : " << dist[i] << endl;
    }

    return 0;
}
