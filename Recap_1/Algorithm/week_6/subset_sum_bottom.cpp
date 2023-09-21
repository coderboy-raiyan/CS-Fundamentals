#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
int dp[N][N];

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
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    };
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (v[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - v[i - 1]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    // if (dp[n][s])
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }
    cout << dp[n][s];
    return 0;
}
