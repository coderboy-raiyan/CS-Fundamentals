#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

vector<int> parent(N);
vector<int> parentSize(N, 1);

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

int mx = 0;

void dsu_union(int u, int v)
{
    int leaderA = dsu_find(u);
    int leaderB = dsu_find(v);

    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
            mx = max(mx, parentSize[leaderA]);
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
            mx = max(mx, parentSize[leaderB]);
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
    }
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        int leaderA = dsu_find(u);
        int leaderB = dsu_find(v);
        if (leaderA != leaderB)
        {
            n--;
        }
        dsu_union(u, v);
        cout << n << " " << mx << endl;
    }
    return 0;
}
