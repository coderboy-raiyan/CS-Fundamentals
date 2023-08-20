#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &v, int l, int m, int r)
{
    int leftSize = (m - l) + 1;
    int rightSize = (r - m);

    int left[leftSize + 1];
    int right[rightSize + 1];

    for (int i = l, k = 0; i <= m; i++, k++)
    {
        left[k] = v[i];
    };
    for (int i = m + 1, k = 0; i <= r; i++, k++)
    {
        right[k] = v[i];
    };

    left[leftSize] = INT_MAX;
    right[rightSize] = INT_MAX;

    int o = 0;
    int q = 0;

    for (int i = l; i < l + r; i++)
    {
        if (left[o] <= right[q])
        {
            v[i] = left[o];
            o++;
        }
        else
        {
            v[i] = right[q];
            q++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    };
    merge(v, 0, 3, n - 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
