#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int N = 1e3 + 5;
int n, m;
vector<vector<char>> g(N);
vector<vector<bool>> visited(N, vector<bool>(N, false));
vector<vector<int>> dist(N, vector<int>(N, -1));

vector<pair<int, int>> dest = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int i, int j)
{
    queue<pii> qu;
    qu.push({i, j});
    dist[i][j] = 0;
    visited[i][j] = true;
    while (!qu.empty())
    {
        int pi = qu.front().first;
        int pj = qu.front().second;
        qu.pop();

        for (pii di : dest)
        {
            int ci = pi + di.first;
            int cj = pj + di.second;

            if (!isValid(ci, cj))
            {
                continue;
            };

            if (visited[ci][cj])
            {
                continue;
            };
            visited[ci][cj] = true;
            qu.push({ci, cj});
            dist[ci][cj] = dist[pi][pj] + 1;
        }
    }
};

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            g[i].push_back('.');
        }
    };
    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
