#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
int parent[N];
int parentLevel[N];
vector<bool> visited(N, false);

int dsu_find(int node)
{
    if (node == parent[node])
    {
        return node;
    }
    else
    {
        return parent[node] = dsu_find(parent[node]);
    }
};

void dsu_union(int u, int v)
{
    int leaderA = dsu_find(u);
    int leaderB = dsu_find(v);

    if (leaderA != leaderB)
    {
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
        else if (parentLevel[leaderB] > parentLevel[leaderA])
        {
            parent[leaderA] = leaderB;
            parentLevel[leaderB]++;
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
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        parentLevel[i] = 0;
    }

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        dsu_union(u, v);
    }
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        int leader = dsu_find(i);
        if (visited[leader])
            continue;
        visited[leader] = true;
        v.push_back(leader);
    }

    return 0;
}
