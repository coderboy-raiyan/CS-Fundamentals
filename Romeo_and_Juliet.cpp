#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
vector<int> g[N];
bool visited[N];
int dist[N];
vector<int> parent(N, -1);

int st = 0;

int src, d, steps;
bool bfs(int s, int step)
{
    queue<int> qu;
    visited[s] = true;
    qu.push(s);
    dist[s] = 0;
    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();

        for (int v : g[u])
        {

            if (visited[v])
                continue;
            // cout << "Parent " << u << " : " << v << endl;

            qu.push(v);
            dist[v] = dist[u] + 1;
            parent[v] = u;
            visited[v] = true;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cin >> src >> d >> steps;
    bfs(src, d);

       return 0;
}
