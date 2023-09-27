#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int h[n];

        int h1 = INT_MIN;
        int h2 = INT_MIN;
        int l = -1;
        int r = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        for (int i = 0; i < n; i++)
        {

            if (h[i] > h1)
            {
                h1 = h[i];
                l = i;
            }
        };

        for (int i = 0; i < n; i++)
        {
            if (h[i] != h1 && h[i] > h2)
            {
                h2 = h[i];
                r = i;
            }
        }
        cout << min(l, r) << " " << max(l, r) << endl;
    }
}