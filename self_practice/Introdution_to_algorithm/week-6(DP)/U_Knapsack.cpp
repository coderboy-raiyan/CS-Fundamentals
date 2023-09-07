#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;
int dp[N][N];

int knapsack(int v[], int w[], int n, int s)
{
    if (n == 0 || s == 0)
    {
        return 0;
    };
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if (w[n - 1] <= s)
    {
        int opt1 = knapsack(v, w, n - 1, s - w[n - 1]) + v[n - 1];
        int opt2 = knapsack(v, w, n - 1, s);
        return dp[n][s] = max(opt1, opt2);
    }
    else
    {
        return dp[n][s] = knapsack(v, w, n - 1, s);
    }
};

int main()
{
    int n, s;
    cin >> n >> s;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    };
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << knapsack(v, w, n, s);
    return 0;
}
