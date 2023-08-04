#include <bits/stdc++.h>

using namespace std;

void merge(int l, int mid, int r, vector<int> &v)
{
    int left_side = mid - l + 1;
    int left[left_side + 1];

    int right_side = r - mid;
    int right[right_side + 1];

    for (int i = l, j = 0; i <= mid; i++, j++)
    {
        left[j] = v[i];
    }
    for (int i = mid + 1, j = 0; i <= r; i++, j++)
    {
        right[j] = v[i];
    }
    left[left_side] = INT_MIN;
    right[right_side] = INT_MIN;

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
    {
        if (left[lp] >= right[rp])
        {
            v[i] = left[lp];
            lp++;
        }
        else
        {
            v[i] = right[rp];
            rp++;
        }
    }
};

void merge_sort(int l, int r, vector<int> &v)
{
    if (l == r)
    {
        return;
    };
    int mid = (l + r) / 2;
    merge_sort(l, mid, v);
    merge_sort(mid + 1, r, v);
    merge(l, mid, r, v);
};

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    };
    merge_sort(0, n - 1, v);
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}
// 9 5 4 2 2 1 0