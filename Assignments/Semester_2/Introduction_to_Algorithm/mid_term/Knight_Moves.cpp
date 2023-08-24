#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

const int N = 1e2 + 10;
vector<vector<int>> g(N);
bool visited[N][N];
int dist[N][N];
int n, m;
vector<pii> dest = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int i, int j)
{
    queue<pii> qu;
    qu.push({i, j});
    visited[i][j] = true;
    dist[i][j] = 0;

    while (!qu.empty())
    {
        pii upair = qu.front();
        int pi = upair.first;
        int pj = upair.second;
        qu.pop();

        for (pii v : dest)
        {
            int ci = v.first + pi;
            int cj = v.second + pj;

            if (!isValid(ci, cj))
            {
                continue;
            }
            if (visited[ci][cj])
                continue;
            visited[ci][cj] = true;
            qu.push({ci, cj});
            dist[ci][cj] = dist[pi][pj] + 1;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;
        bfs(ki, kj);
        if (visited[qi][qj])
        {
            cout << dist[qi][qj] << endl;
        }
        else
        {
            cout << -1 << endl;
        };
        memset(visited, false, sizeof visited);
        memset(dist, 0, sizeof dist);
    }

    return 0;
}
