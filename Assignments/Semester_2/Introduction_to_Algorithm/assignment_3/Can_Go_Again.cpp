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

const int N = 1e3 + 5;
const long long int INF = 1e18;
vector<long long int> dist(N, INF);

int main()
{
    int n, m;
    cin >> n >> m;
    vector<Edge> edges;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }
    int src;
    cin >> src;
    dist[src] = 0;
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
            };
        }
    };
    bool isCycle = false;
    for (int j = 0; j < edges.size(); j++)
    {
        Edge ed = edges[j];
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;

        if (dist[u] < INF && dist[v] > dist[u] + w)
        {
            isCycle = true;
            break;
        };
    }
    if (isCycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int d;
            cin >> d;
            if (dist[d] == INF)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dist[d] << endl;
            }
        }
    }

    return 0;
}
