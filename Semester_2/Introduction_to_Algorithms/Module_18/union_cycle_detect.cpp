#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

vector<int> parent(N, -1);
vector<int> parentLevel(N, 0);

int findLeader(int n)
{
    while (parent[n] != -1)
    {
        n = parent[n];
    }
    return n;
}

void union_dsu(int u, int v)
{
    int leaderA = findLeader(u);
    int leaderB = findLeader(v);

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
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (findLeader(u) == findLeader(v))
        {
            cout << "Cycle Detected";
        }
        else
        {
            union_dsu(u, v);
        }
    };

    return 0;
}
