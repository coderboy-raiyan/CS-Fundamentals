#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int n, m;
    bool visited[100][100];
    vector<pair<int, int>> dest = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
    bool isValid(int i, int j)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    void bfs(int i, int j, int color, int srcColor, vector<vector<int>> &image)
    {
        queue<pair<int, int>> qu;
        qu.push({i, j});
        visited[i][j] = true;
        while (!qu.empty())
        {
            int pi = qu.front().first;
            int pj = qu.front().second;
            qu.pop();
            if (image[pi][pj] == srcColor)
            {
                image[pi][pj] = color;
            }

            for (auto di : dest)
            {
                int ci = pi + di.first;
                int cj = pj + di.second;
                if (!isValid(ci, cj))
                {
                    continue;
                };
                if (image[ci][cj] != srcColor)
                {
                    continue;
                };
                if (visited[ci][cj])
                {
                    continue;
                }

                visited[ci][cj] = true;
                qu.push({ci, cj});
            }
        };
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        n = image.size();
        m = image[0].size();
        bfs(sr, sc, color, image[sr][sc], image);
        return image;
    }
};

int main()
{

    return 0;
}
