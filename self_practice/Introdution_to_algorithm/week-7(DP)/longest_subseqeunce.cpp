#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

vector<vector<int>> dp(N, vector<int>(N, -1));

int lcs(string s1, int n, string s2, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    };
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    if (s1[n - 1] == s2[m - 1])
    {
        return dp[n][m] = lcs(s1, n - 1, s2, m - 1) + 1;
    }
    else
    {
        int opt1 = lcs(s1, n - 1, s2, m);
        int opt2 = lcs(s1, n, s2, m - 1);
        return dp[n][m] = max(opt1, opt2);
    };
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    cout << lcs(s1, n, s2, m);
    return 0;
}
