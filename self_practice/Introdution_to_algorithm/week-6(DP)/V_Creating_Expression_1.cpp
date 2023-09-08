// #include <bits/stdc++.h>

// using namespace std;

// bool knapsack(long long long long int s, long long int i, long long int sz, long long int result, long long int a[])
// {
//     if (i == sz)
//     {
//         return s == result;
//     };
//     bool opt1 = knapsack(s + a[i], i + 1, sz, result, a);
//     bool opt2 = knapsack(s - a[i], i + 1, sz, result, a);
//     return opt1 || opt2;
// };

// long long int main()
// {
//     long long int n, x;
//     cin >> n >> x;
//     long long int a[n];
//     for (long long int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     };
//     bool check = knapsack(a[0], 1, n, x, a);
//     if (check)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

bool knapsack(long long int s, long long int n, long long int x, long long int a[])
{
    if (n == 0)
    {
        return s == x;
    };
    bool opt1 = knapsack(s + a[n], n - 1, x, a);
    bool opt2 = knapsack(s - a[n], n - 1, x, a);
    return opt1 || opt2;
};

int main()
{
    long long int n, x;
    cin >> n >> x;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    };
    if (knapsack(a[0], n - 1, x, a))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
