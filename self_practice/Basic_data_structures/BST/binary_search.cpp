#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int val;
        cin >> val;
        v.push_back(val);
    };
    int sVal;
    cin >> sVal;

    int l = 0;
    int r = v.size() - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (sVal == v[mid])
        {
            cout << "YES";
            return 0;
        }
        else
        {
            if (sVal < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    cout << "NO";

    return 0;
}
