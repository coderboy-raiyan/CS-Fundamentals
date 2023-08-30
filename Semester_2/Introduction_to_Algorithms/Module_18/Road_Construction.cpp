#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

vector<int> parent(N, -1);
vector<int> parentSize(N, 1);

int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
};
int mx = INT_MIN;

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
    int n, m;
    cin >> n >> m;
    int cmp = n;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        int leaderA = dsu_find(u);
        int leaderB = dsu_find(v);

        if (leaderA != leaderB)
        {
            cmp--;
            dsu_union(u, v);
        };
        cout << cmp << " " << mx << endl;
    }

    return 0;
}
