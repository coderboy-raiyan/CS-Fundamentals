#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];

int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (visited[v])
            {
                continue;
            };
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
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
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(0);
    int l;
    cin >> l;

    if (l == 0)
    {
        cout << 0;
    }
    else
    {
        vector<int> s;
        for (int i = 0; i <= N; i++)
        {
            if (level[i] == l)
            {
                s.push_back(i);
            }
        }
        if (s.empty())
        {
            cout << -1;
        }
        else
        {
            for (int v : s)
            {
                cout << v << " ";
            }
        }
    }

    return 0;
}
