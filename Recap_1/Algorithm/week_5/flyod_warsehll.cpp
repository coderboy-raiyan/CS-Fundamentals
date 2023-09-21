#include <bits/stdc++.h>

using namespace std;
const long long int INF = 1e18;

int main()
{
    int n, e;
    cin >> n >> e;
    long long int dist[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dist[i][j] = INF;
            if (i == j)
                dist[i][j] = 0;
        }
    };
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
            {
                cout << "I"
                     << " ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        };
        cout << endl;
    }

    return 0;
}
