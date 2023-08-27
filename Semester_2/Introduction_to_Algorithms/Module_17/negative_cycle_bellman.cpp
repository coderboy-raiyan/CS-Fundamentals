#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int u;
    int v;
    int w;

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
    vector<Edge> ed;
    vector<int> dist(n + 1, INT_MAX);

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Edge edge(u, v, w);
        ed.push_back(edge);
    };
    dist[1] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < ed.size(); j++)
        {
            Edge e = ed[j];
            if (dist[e.v] > dist[e.u] + e.w)
            {
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }
    bool cycle = false;
    for (int j = 0; j < ed.size(); j++)
    {
        Edge e = ed[j];
        if (dist[e.v] > dist[e.u] + e.w)
        {
            cycle = true;
            break;
            dist[e.v] = dist[e.u] + e.w;
        }
    }

    if (cycle)
    {
        cout << "cycle detected";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "Node " << i << " : " << dist[i] << endl;
        }
    }

    return 0;
}
