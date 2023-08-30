#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int N = 1e3 + 5;
vector<pii> g[N];
vector<bool> visited(N, false);

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

class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

void prims(int src, vector<Edge> &edgeList)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;
    pq.push(Edge(src, src, 0));

    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        int pu = parent.u;
        int pv = parent.v;
        int pw = parent.w;
        if (visited[pv])
            continue;
        visited[pv] = true;
        pq.push(parent);
        edgeList.push_back(parent);
        for (pii child : g[pv])
        {
            int cv = child.first;
            int cw = child.second;

            if (visited[cv])
                continue;
            pq.push(Edge(pu, cv, cw));
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
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    vector<Edge> edgeList;
    prims(1, edgeList);
    for (auto ed : edgeList)
    {
        cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }

    return 0;
}
