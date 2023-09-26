#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        for (int j = 1; j <= n; j++)
        {
            if (j == 1)
            {
                continue;
            }
            if (i == 1)
            {
                cout << j;
            }
            else if (i == n || j == n)
            {
                cout << n;
            }
            else if (i == j || i + j == n + 1)
            {
                cout << " ";
            }
            else if (j > i || j < i)
            {
                cout << " ";
            }
            else
            {
                cout << i;
            }
        };
        cout << endl;
    }

    return 0;
}
