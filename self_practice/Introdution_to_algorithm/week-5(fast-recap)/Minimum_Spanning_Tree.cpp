#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 5;

vector<int> parent(N);
vector<int> parentLevel(N, 0);

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

int dsu_leader(int node)
{
    if (node == parent[node])
    {
        return node;
    }
    else
    {
        return parent[node] = dsu_leader(parent[node]);
    }
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

class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    };
    priority_queue<Edge, vector<Edge>, cmp> edgeList;
    vector<Edge> finalList;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Edge edge(u, v, w);
        edgeList.push(edge);
    };
    long long int total = 0;
    while (!edgeList.empty())
    {
        Edge ed = edgeList.top();
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;
        edgeList.pop();
        int leaderA = dsu_leader(u);
        int leaderB = dsu_leader(v);

        if (leaderA == leaderB)
        {
            continue;
        };
        dsu_union(u, v);
        finalList.push_back(ed);
        total += (long long int)(w);
    };
    cout << total;
    return 0;
}
