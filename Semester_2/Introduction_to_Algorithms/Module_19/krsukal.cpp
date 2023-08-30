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
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
const int N = 1e3 + 5;

vector<int> parent(N, -1);
vector<int> parentLevel(N, 0);

int dsu_leader(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    };
    return node;
};

void dsu_union(int u, int v)
{
    int leaderA = dsu_leader(u);
    int leaderB = dsu_leader(v);

    if (leaderA != leaderB)
    {
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            parent[leaderB] = leaderA;
        }
        else if (parentLevel[leaderB] > parentLevel[leaderA])
        {
            parent[leaderA] = leaderB;
        }
        else
        {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<Edge> edgeList;
    vector<Edge> finalList;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    for (Edge edge : edgeList)
    {
        int u = edge.u;
        int v = edge.v;
        int w = edge.w;

        int leaderA = dsu_leader(u);
        int leaderB = dsu_leader(v);

        if (leaderA == leaderB)
        {
            continue;
        };
        finalList.push_back(edge);
        dsu_union(u, v);
    };
    for (auto edge : finalList)
    {
        cout << edge.u << " " << edge.v << " " << edge.w << endl;
    }
    return 0;
}
