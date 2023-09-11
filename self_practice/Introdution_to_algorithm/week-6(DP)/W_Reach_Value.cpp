#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

map<ll, ll> dp;

bool knapsack(ll s, ll res)
{
    if (dp.find(s) != dp.end())
    {
        return dp[s];
    }
    if (s < res)
    {
        bool opt1 = knapsack(s * 10, res);
        bool opt2 = knapsack(s * 20, res);
        return dp[s] = opt1 || opt2;
    }
    else
    {
        return dp[s] = (s == res);
    }
};

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (knapsack(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        dp = map<ll, ll>();
    }

    return 0;
}
