#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;

typedef long long int ll;
ll dp[1005][1005];

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
        dp[0][0] = 1;
        for (int i = 1; i <= m; i++)
        {
            dp[0][i] = 0;
        };
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (a[i - 1] <= j)
                {
                    int total = dp[i][j - a[i - 1]] + dp[i - 1][j];
                    int modNum = total;
                    if (total > INF)
                    {
                        modNum = total % INF;
                    }
                    dp[i][j] = modNum;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        cout << dp[n][m] << endl;
    }

    return 0;
}
