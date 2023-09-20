#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<int> arr[N];

int main()
{
    int n, e;
    cin >> n >> e;
    int adj[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            adj[i][j] = 0;
            if (i == j)
            {
                adj[i][j] = 1;
            }
        }
    }
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (adj[i][j] == 1)
            {
                cout << i << " : " << j << " : " << adj[i][j] << " || ";
            }
        };
        cout << endl;
    };

    return 0;
}
