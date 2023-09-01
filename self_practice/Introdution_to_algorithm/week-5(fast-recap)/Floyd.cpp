#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main()
{
    int n;
    cin >> n;
    int dist[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            int num;
            cin >> num;
            if (num == -1)
            {
                dist[i][j] = 100;
            }
            else
            {
                dist[i][j] = num;
            }
        }
    };
    int mx = 0;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {

                    dist[i][j] = dist[i][k] + dist[k][j];
                    mx = max(mx, dist[i][j]);
                }
            }
        };
    };
    cout << mx;
    return 0;
}
