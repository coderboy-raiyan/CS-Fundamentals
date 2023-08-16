#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
int d[N][N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = w;
    }

    return 0;
}
