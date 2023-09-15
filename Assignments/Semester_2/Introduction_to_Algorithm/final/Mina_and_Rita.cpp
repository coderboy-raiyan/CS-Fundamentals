#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;

int dp[N][N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                dp[i][j] = 0;
            }
        };
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        };
        cout << (n + m) - dp[n][m] << endl;
        memset(dp, 0, sizeof(dp));
    }

    return 0;
}
