#include <bits/stdc++.h>

using namespace std;

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

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edges;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }
    int dist[n + 1];
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX - 1;
    };
    dist[0] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < edges.size(); j++)
        {
            Edge ed = edges[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }
    bool isCycle = false;
    for (int j = 0; j < edges.size(); j++)
    {
        Edge ed = edges[j];
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;

        if (dist[u] < INT_MAX - 1 && dist[u] + w < dist[v])
        {
            isCycle = true;
            break;
        }
    };
    if (isCycle)
    {
        cout << "Cycle Exists";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
