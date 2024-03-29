#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
int adj[N][N]; /// n * n matrix 2d array

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        // adj[v][u] = 1; //undirectional
    };
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
