#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

vector<int> parent(N, -1);

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
        parent[leaderB] = leaderA;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsu_union(u, v);
    }
    cout << parent[5];
    return 0;
}
