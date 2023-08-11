#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
bool visited[N];

bool is_cyclic(int u, int p = -1)
{
    visited[u] = true;
    bool check = false;
    for (int v : adj[u])
    {
        if (v == p)
        {
            continue;
        };
        if (visited[v])
        {
            return true;
        };
        check = check | is_cyclic(v, u);
    };
    return check;
};

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    };
    bool is_cycle = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            continue;
        };
        is_cycle = is_cycle | is_cyclic(i);
    }
    if (is_cycle)
    {
        cout << "cycle detected";
    }
    else
    {
        cout << "Not detected";
    }

    return 0;
}
