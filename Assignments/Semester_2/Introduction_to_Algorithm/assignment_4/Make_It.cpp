#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll N = 1e5 + 5;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        bool dp[N];
        memset(dp, false, sizeof(dp));

        dp[1] = true;

        for (ll i = 1; i <= n; i++)
        {
            if (dp[i])
            {
                if (i * 2 <= n)
                    dp[i * 2] = true;
                if (i + 3 <= n)
                    dp[i + 3] = true;
            }
        }

        if (dp[n])
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
