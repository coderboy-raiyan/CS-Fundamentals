#include <bits/stdc++.h>

using namespace std;

int ubound_knapsack(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return 1;
        else
            return 0;
    }

    if (a[n - 1] <= s)
    {
        int op1 = ubound_knapsack(n, a, s - a[n - 1]);
        int op2 = ubound_knapsack(n - 1, a, s);
        return op1 + op2;
    }
    else
    {
        return ubound_knapsack(n - 1, a, s);
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
    }
    int s;
    cin >> s;
    cout << ubound_knapsack(n, a, s);
    return 0;
}
