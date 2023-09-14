#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<vector<int>> dp(N, vector<int>(N, -1));

int unbound_knapsack(int n, int s, int v[], int w[])
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
        int opt1 = unbound_knapsack(n, s - w[n - 1], v, w) + v[n - 1];
        int opt2 = unbound_knapsack(n - 1, s, v, w);
        return dp[n][s] = max(opt1, opt2);
    }
    else
    {
        return dp[n][s] = unbound_knapsack(n - 1, s, v, w);
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
        w[i] = i + 1;
    };
    int res = unbound_knapsack(n, n, v, w);
    cout << res;
    return 0;
}
