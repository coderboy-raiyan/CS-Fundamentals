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
}

int main()
{
    int n;
    cin >> n;
    int a[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    };
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    };
    int s;
    cin >> s;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    };
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (w[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j - w[i - 1]] + a[i - 1], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][s];
    return 0;
}
