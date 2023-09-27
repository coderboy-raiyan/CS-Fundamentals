#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];
vector<bool> visited(N, false);

void dfs(int s, int k, vector<int> &cities)
{

    cities.push_back(s);
    if (k >= 1)
    {
        for (int i = 0; i < g[s].size(); i++)
        {
            if (visited[g[s][i]])
                continue;
            visited[g[s][i]] = true;
            cities.push_back(g[s][i]);

            for (int j = 1; j < k; j++)
            {
                for (int v : g[g[s][i]])
                {
                    if (visited[v])
                        continue;
                    cities.push_back(v);
                    visited[v] = true;
                }
            }
        }
    }
    visited = vector<bool>(N, false);
};

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
    int r, j, k;
    cin >> r >> j >> k;

    vector<int> ri;
    vector<int> ji;

    dfs(r, k, ri);
    dfs(j, k, ji);
    for (int i = 0; i < ri.size(); i++)
    {
        for (int j = 0; j < ji.size(); j++)
        {
            if (ri[i] == ji[j])
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}
