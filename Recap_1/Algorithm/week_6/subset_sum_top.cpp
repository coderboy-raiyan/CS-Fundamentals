#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<vector<int>> dp(N, vector<int>(N, -1));

int knapsack(int n, int s, int v[])
{
    if (n == 0)
    {
        if (s == 0)
        {
            return 1;
        };
        return 0;
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if (v[n - 1] <= s)
    {
        int opt1 = knapsack(n - 1, s - v[n - 1], v);
        int opt2 = knapsack(n - 1, s, v);
        return dp[n][s] = opt1 + opt2;
    }
    else
    {
        return dp[n][s] = knapsack(n - 1, s, v);
    }
};

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    };
    int s;
    cin >> s;

    cout << knapsack(n, s, v);

    return 0;
}
