#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int u, int &count)
{
    visited[u] = true;
    count++;
    for (int v : adj[u])
    {
        if (visited[v])
        {
            continue;
        };
        dfs(v, count);
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
        adj[u].push_back(v);
        adj[v].push_back(u);
    };
    int cnt = 0;
    vector<int> comp;
    for (int i = 0; i <= 1000; i++)
    {
        if (visited[i])
        {
            continue;
        }
        cnt = 0;
        dfs(i, cnt);
        if (cnt > 1)
        {
            comp.push_back(cnt);
        }
    }
    sort(comp.begin(), comp.end());
    for (int size : comp)
    {
        cout << size << " ";
    }
    return 0;
}
