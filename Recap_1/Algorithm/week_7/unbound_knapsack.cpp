#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
int dp[N][N];

int unbound_knapsack(int n, int s, int v[], int w[])
{
    if (n == 0 || s == 0)
    {
        return 0;
    };
    if (w[n - 1] <= s)
    {
        int opt1 = unbound_knapsack(n, s - w[n - 1], v, w) + v[n - 1];
        int opt2 = unbound_knapsack(n - 1, s, v, w);
        return max(opt1, opt2);
    }
    else
    {
        return unbound_knapsack(n - 1, s, v, w);
    }
};

int main()
{
    int n;
    cin >> n;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
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
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (w[i - 1] <= j)
            {
                dp[i][j] = max(dp[i][j - w[i - 1]] + v[i - 1], dp[i - 1][j]);
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
