#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
typedef pair<int, int> pii;

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

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
    vector<pii> cycles;
    vector<pii> newRoad;

    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        int leaderA = dsu_leader(u);
        int leaderB = dsu_leader(v);
        if (leaderA == leaderB)
        {
            cycles.push_back({u, v});
        }
        else
        {
            dsu_union(u, v);
        };
    };
    int mainLead = dsu_leader(1);

    for (int i = 2; i <= n; i++)
    {
        int foundLead = dsu_leader(i);
        if (mainLead != foundLead)
        {
            dsu_union(mainLead, i);
            newRoad.push_back({i, mainLead});
        }
    };
    cout << cycles.size() << endl;

    for (auto road : cycles)
    {
        cout << road.first << " " << road.second << " ";
    }
    for (auto road : newRoad)
    {
        cout << road.first << " " << road.second << " ";
    }

    return 0;
}
