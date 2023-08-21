#include <bits/stdc++.h>

using namespace std;

void merge(int v[], int l, int m, int r)
{
    int leftSide = (m - l) + 1;
    int rightSide = r - m;

    int left[leftSide];
    int right[rightSide];

    for (int i = l, k = 0; i <= m; i++, k++)
    {
        left[k] = v[i];
    }
    for (int i = m + 1, k = 0; i <= r; i++, k++)
    {
        right[k] = v[i];
    };

    int rIdx = 0;
    int lIdx = 0;
    int curr = l;

    while (lIdx < leftSide && rIdx < rightSide)
    {
        if (left[lIdx] <= right[rIdx])
        {
            v[curr] = left[lIdx];
            lIdx++;
        }
        else
        {
            v[curr] = right[rIdx];
            rIdx++;
        }
        curr++;
    };
    while (lIdx < leftSide)
    {
        v[curr] = left[lIdx];
        lIdx++;
        curr++;
    };
    while (rIdx < rightSide)
    {
        v[curr] = right[rIdx];
        rIdx++;
        curr++;
    }
};

void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
};

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    };
    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
