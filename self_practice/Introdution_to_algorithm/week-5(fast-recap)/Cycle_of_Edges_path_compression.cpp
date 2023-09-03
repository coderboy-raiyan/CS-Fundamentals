#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

vector<int> parent(N);
vector<int> parentLevel(N, 0);

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
int cnt = 0;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        int leaderA = dsu_leader(u);
        int leaderB = dsu_leader(v);

        if (leaderA == leaderB)
        {
            cnt++;
        }
        else
        {
            dsu_union(u, v);
        }
    }

    cout << cnt;

    return 0;
}
