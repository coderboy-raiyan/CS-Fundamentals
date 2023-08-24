#include <bits/stdc++.h>

using namespace std;

typedef pair<long long int, long long int> pii;

const long long int N = 1e3 + 5;
vector<pii> g[N];
vector<bool> visited(N, false);
vector<long long int> dist(N, INT_MAX);

void dijkstra(long long int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[src] = 0;
    pq.push({dist[src], src});
    while (!pq.empty())
    {
        long long int uNode = pq.top().second;
        long long int uCost = pq.top().first;
        pq.pop();
        visited[uNode] = true;

        for (pii vpair : g[uNode])
        {
            long long int v = vpair.second;
            long long int w = vpair.first;

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
    long long int n, m;
    cin >> n >> m;
    for (long long int i = 0; i < m; i++)
    {
        long long int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({w, v});
        // g[v].push_back({w, u});
    }
    long long int s, t;
    cin >> s >> t;

    dijkstra(s);
    while (t--)
    {
        long long int d, w;
        cin >> d >> w;
        if (d > 1000)
        {
            cout << "NO";
            continue;
        }
        if (dist[d] <= w)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
