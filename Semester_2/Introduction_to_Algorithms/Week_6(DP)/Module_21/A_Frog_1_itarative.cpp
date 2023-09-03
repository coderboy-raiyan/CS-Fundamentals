#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1], dp[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    };
    dp[1] = 0;
    dp[2] = abs(arr[2] - arr[1]);
    for (int i = 3; i <= n; i++)
    {
        int choice2 = dp[i - 2] + abs(arr[i] - arr[i - 2]);
        int choice1 = dp[i - 1] + abs(arr[i] - arr[i - 1]);
        dp[i] = min(choice1, choice2);
    };
    cout << dp[n];

    return 0;
}
