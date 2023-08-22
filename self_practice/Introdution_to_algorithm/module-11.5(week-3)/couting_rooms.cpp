#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<vector<char>> g(N);
bool visited[N][N];
vector<pair<int, int>> dest = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
};

void dfs(int i, int j, int &floors)
{
    if (!isValid(i, j))
    {
        return;
    };
    if (g[i][j] == '#')
    {
        return;
    };
    if (visited[i][j])
    {
        return;
    };
    visited[i][j] = true;
    floors++;
    for (auto it : dest)
    {
        dfs(i + it.first, j + it.second, floors);
    }
}

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
    };
    int cnt = 0;
    int floorCnt = 0;
    priority_queue<int, vector<int>> pq;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j])
            {
                continue;
            }
            if (g[i][j] == '#')
                continue;
            cnt++;
            dfs(i, j, floorCnt);
            pq.push(floorCnt);
            floorCnt = 0;
        }
    }
    cout << pq.top();

    return 0;
}
