#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> dist(N, -1);

int solve(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    };
    if (dist[n] != -1)
    {
        return dist[n];
    }
    else if (n == 2)
    {
        return dist[n] = abs(arr[2] - arr[1]);
    }
    else
    {
        int choice1 = solve(arr, n - 1) + abs(arr[n] - arr[n - 1]);
        int choice2 = solve(arr, n - 2) + abs(arr[n] - arr[n - 2]);
        return dist[n] = min(choice1, choice2);
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    };
    int res = solve(arr, n);
    cout << res;
    return 0;
}
