#include <bits/stdc++.h>

using namespace std;

const long long int N = 1e5 + 5;
vector<long long int> memo(N, -1);

long long int fibo(long long int n)
{
    if (n <= 1)
    {
        return 1;
    }
    if (memo[n] != -1)
    {
        return memo[n];
    }
    long long int ans1 = fibo(n - 1);
    long long int ans2 = fibo(n - 2);
    memo[n] = ans1 + ans2;
    return memo[n];
};

int main()
{
    long long int n;
    cin >> n;
    long long int ans = fibo(n);
    cout << ans;
    return 0;
}
