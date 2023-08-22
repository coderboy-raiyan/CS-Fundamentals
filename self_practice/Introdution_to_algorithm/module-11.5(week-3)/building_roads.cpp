#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];
vector<bool> visited(N, false);

void dfs(int src)
{
    visited[src] = true;
    for (int v : g[src])
    {
        if (visited[v])
            continue;
        dfs(v);
    };
};

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> cities;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        cities.push_back(i);
        dfs(i);
    };
    cout << cities.size() - 1 << endl;
    for (int roads : cities)
    {
        cout << roads << " ";
    }
    return 0;
}
