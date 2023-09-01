#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

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
int cnt = 0;
int main()
{
    int n, m;
    cin >> n >> m;

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
