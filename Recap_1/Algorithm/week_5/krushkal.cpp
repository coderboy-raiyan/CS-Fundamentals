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
    long long int totalMinCost = 0;
    for (auto ed : finalList)
    {
        totalMinCost += (long long)(ed.w);
        cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }
    cout << endl
         << "Total Min cost : " << totalMinCost;
    return 0;
}

// 7 6 1
// 1 5 2
// 8 6 2
// 1 2 4
// 5 4 5
// 4 8 9
// 3 4 11

// 1 5 2
// 1 2 4
// 5 4 5
// 4 8 9
// 8 6 2
// 6 7 1
// 4 3 11
