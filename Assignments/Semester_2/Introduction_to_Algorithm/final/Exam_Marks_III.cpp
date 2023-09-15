#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
int dp[1000][1000];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, marks;
        cin >> n >> marks;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        };
        int m = 1000 - marks;

        dp[0][0] = 0;
        for (int i = 1; i <= m; i++)
        {
            dp[0][i] = INT_MAX - 1;
        };
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = min(dp[i][j - a[i - 1]] + 1, dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][m] == INT_MAX - 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dp[n][m] << endl;
        }
    }

    return 0;
}
