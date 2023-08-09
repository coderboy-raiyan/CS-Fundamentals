#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1000];
bool visited[1000];

bool dfs(int u, int p = -1)
{
    visited[u] = true;
    bool checkCycle = false;
    for (int v : adj[u])
    {
        if (v == p)
        {
            continue;
        }
        if (visited[v])
        {
            return true;
        };
        checkCycle = checkCycle | dfs(v, u);
    };
    return checkCycle;
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
    }
    if (dfs(1))
    {
        cout << "Cycle detected" << endl;
    }
    else
    {
        cout << "Not detected" << endl;
    }
    return 0;
}
