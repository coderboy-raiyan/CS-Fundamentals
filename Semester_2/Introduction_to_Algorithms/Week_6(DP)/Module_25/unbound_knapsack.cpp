#include <bits/stdc++.h>

using namespace std;

int unbound_knapsack(int n, int s, int v[], int w[])
{
    if (n == 0 || s == 0)
    {
        return 0;
    };
    if (w[n - 1] <= s)
    {
        int opt1 = unbound_knapsack(n, s - w[n - 1], v, w) + v[n - 1];
        int opt2 = unbound_knapsack(n - 1, s, v, w);

        return max(opt1, opt2);
    }
    else
    {
        return unbound_knapsack(n - 1, s - w[n - 1], v, w);
    }
}

int main()
{
    int n, s;
    cin >> n >> s;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int res = unbound_knapsack(n, s, v, w);
    cout << res;
    return 0;
}
