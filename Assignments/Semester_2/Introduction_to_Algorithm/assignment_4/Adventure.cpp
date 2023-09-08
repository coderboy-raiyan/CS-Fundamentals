#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;
vector<vector<int>> dp(N, vector<int>(N, -1));

int knapsack(vector<int> &v, vector<int> &w, int s, int n)
{
    if (n == 0 || s == 0)
    {
        return 0;
    };
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    };
    if (w[n - 1] <= s)
    {
        int opt1 = knapsack(v, w, s - w[n - 1], n - 1) + v[n - 1];
        int opt2 = knapsack(v, w, s, n - 1);

        return dp[n][s] = max(opt1, opt2);
    }
    else
    {
        return dp[n][s] = knapsack(v, w, s, n - 1);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sz;
        cin >> n >> sz;
        vector<int> v(n);
        vector<int> w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << knapsack(v, w, sz, n) << endl;
        dp = vector<vector<int>>(N, vector<int>(N, -1));
    }

    return 0;
}
