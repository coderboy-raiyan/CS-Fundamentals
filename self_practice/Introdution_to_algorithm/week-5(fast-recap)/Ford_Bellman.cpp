#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

const int INF = 1e9;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> dist(n + 1, INF);
    vector<Edge> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Edge edge(u, v, w);
        edges.push_back(edge);
    };
    dist[1] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < edges.size(); j++)
        {
            Edge ed = edges[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if (dist[u] < INF && dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
            }
        }
    };

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INF)
        {
            if (i == n)
            {
                cout << 30000;
            }
            else
            {
                cout << 30000 << " ";
            }
        }
        else
        {
            if (i == n)
            {
                cout << dist[i];
            }
            else
            {
                cout << dist[i] << " ";
            }
        }
    }

    return 0;
}
