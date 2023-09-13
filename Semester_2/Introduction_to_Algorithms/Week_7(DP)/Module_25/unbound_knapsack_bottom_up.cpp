#include <bits/stdc++.h>

using namespace std;

int unbound_knapsack(int v[], int w[], int n, int s)
{
    if (n == 0 || s == 0)
    {
        return 0;
    };
    if (w[n - 1] <= s)
    {
        int opt1 = unbound_knapsack(v, w, n, s - w[n - 1]) + v[n - 1];
        int opt2 = unbound_knapsack(v, w, n - 1, s);
        return max(opt1, opt2);
    }
    else
    {
        return unbound_knapsack(v, w, n - 1, s);
    }
};

int main()
{
    int n, s;
    cin >> n >> s;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    };
    int dp[n + 1][s + 1];
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
                int opt1 = dp[i][j - w[i - 1]] + v[i - 1];
                int opt2 = dp[i - 1][j];
                dp[i][j] = max(opt1, opt2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][s] << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
