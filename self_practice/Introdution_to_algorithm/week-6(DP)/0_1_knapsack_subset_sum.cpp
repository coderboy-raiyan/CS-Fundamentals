#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

vector<vector<bool>> dp(N, vector<bool>(N, -1));

bool knapsack(int a[], int s, int n)
{
    if (n == 0)
    {
        if (s == 0)
        {
            return true;
        }

        return false;
    };
    if (dp[n][s])
    {
        return dp[n][s];
    }
    if (a[n - 1] <= s)
    {
        bool opt1 = knapsack(a, s - a[n - 1], n - 1);
        bool opt2 = knapsack(a, s, n - 1);
        return dp[n][s] = opt1 || opt2;
    }
    else
    {
        return dp[n][s] = knapsack(a, s, n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    };
    int s;
    cin >> s;

    if (knapsack(a, s, n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
