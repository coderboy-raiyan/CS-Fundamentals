#include <bits/stdc++.h>

using namespace std;

const long long int INF = 1e18;

int main()
{
    int n, m;
    cin >> n >> m;
    long long int dist[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            dist[i][j] = LONG_MAX;
            if (i == j)
            {
                dist[i][j] = 0;
            }
        }
    };

    while (m--)
    {
        long long int u, v, w;
        cin >> u >> v >> w;
        if (dist[u][v] > w)
        {
            dist[u][v] = w;
        }
    };
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
    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;

        if (dist[u][v] == LONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[u][v] << endl;
        }
    }

    return 0;
}
