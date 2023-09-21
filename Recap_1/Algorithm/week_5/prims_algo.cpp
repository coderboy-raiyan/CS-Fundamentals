#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

const int N = 1e3 + 5;
vector<pii> g[N];
bool visited[N];

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
    };
};

void prims(int s, vector<Edge> &edgeList)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;
    pq.push(Edge(s, s, 0));
    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        int pu = parent.u;
        int pv = parent.v;
        int pw = parent.w;
        if (visited[pv])
        {
            continue;
        };
        visited[pv] = true;
        edgeList.push_back(parent);
        for (pii child : g[pv])
        {
            int cv = child.first;
            int cw = child.second;

            if (visited[cv])
            {
                continue;
            };
            pq.push(Edge(pv, cv, cw));
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    };
    vector<Edge> edgeList;
    prims(1, edgeList);
    long long int totalMinCost = 0;
    for (auto ed : edgeList)
    {
        totalMinCost += (long long)(ed.w);
        cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }
    cout << endl
         << "Total Min cost : " << totalMinCost;
    return 0;
}
