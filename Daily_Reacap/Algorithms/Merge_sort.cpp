#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 7;
int a[N];

void merge(int l, int r, int mid)
{
    int leftLength = (mid - l) + 1;
    int rightLength = r - mid;

    int left[leftLength + 1];
    int right[rightLength + 1];

    for (int i = l, k = 0; i <= mid; i++, k++)
    {
        left[k] = a[i];
    }
    for (int i = mid + 1, k = 0; i <= r; i++, k++)
    {
        right[k] = a[i];
    }
    left[leftLength] = INT_MAX;
    right[rightLength] = INT_MAX;

    int k = l;
    int i = 0;
    int j = 0;
    while (k <= r)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }
}

void merge_sort(int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    merge(l, r, mid);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    merge_sort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
