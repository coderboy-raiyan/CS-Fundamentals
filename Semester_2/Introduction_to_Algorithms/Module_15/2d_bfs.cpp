#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int N = 1e3 + 5;
vector<vector<char>> g(N);
bool visited[N][N];
int dist[N][N];
vector<pii> dest = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
};

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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            g[i].push_back(c);
        }
    }
    bfs(0, 1);
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
