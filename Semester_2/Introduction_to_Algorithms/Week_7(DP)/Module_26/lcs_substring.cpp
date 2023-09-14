#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    };
    int mx = INT_MIN;
    pair<int, int> path;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > mx)
                {
                    mx = dp[i][j];
                    path = {i, j};
                }
            }
            else
            {
                dp[i][j] = 0;
            };
        }
    };

    int i = path.first;
    int j = path.second;
    string ans;
    while (i != 0 && j != 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            ans += s1[i - 1];
            i--;
            j--;
        }
        else
        {
            break;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    cout << mx;
    return 0;
}
