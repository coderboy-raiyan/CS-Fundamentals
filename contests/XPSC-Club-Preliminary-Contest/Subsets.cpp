#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;

int solve(int n, int d, vector<int> &v)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += v[i];
    };
    if (d > s || (d + s) % 2 != 0)
    {
        return 0;
    }

    s = (s + d) / 2;
    int dp[n + 1][s + 1] = {0};
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (v[i - 1] <= j)
            {
                dp[i][j] = (dp[i - 1][j - v[i - 1]] + dp[i - 1][j]) % INF;
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][s];
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        };

        cout << solve(n, d, a) << endl;
    }

    return 0;
}
