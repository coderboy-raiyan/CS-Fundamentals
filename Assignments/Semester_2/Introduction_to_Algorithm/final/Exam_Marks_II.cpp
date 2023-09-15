#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        };
        int currentMarks = 1000 - m;
        bool dp[1005][1005];
        dp[0][0] = true;
        for (int i = 1; i <= currentMarks; i++)
        {
            dp[0][i] = false;
        };
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= currentMarks; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i][j - a[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        };
        if (dp[n][currentMarks])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
