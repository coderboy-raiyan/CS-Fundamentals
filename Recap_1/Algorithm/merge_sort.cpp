#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
int nums[N];

void merge(int l, int mid, int r)
{
    int leftLength = mid - l + 1;
    int rightLength = r - mid;

    int left[leftLength + 1];
    int right[rightLength + 1];

    for (int i = l, k = 0; i <= mid; i++, k++)
    {
        left[k] = nums[i];
    }
    for (int i = mid + 1, k = 0; i <= r; i++, k++)
    {
        right[k] = nums[i];
    }
    left[leftLength] = INT_MAX;
    right[rightLength] = INT_MAX;
    int lp = 0, rp = 0;
    int i = l;
    while (i <= r)
    {
        if (left[lp] <= right[rp])
        {
            nums[i] = left[lp];
            lp++;
        }
        else
        {
            nums[i] = right[rp];
            rp++;
        }
        i++;
    }
};

void merge_sort(int l, int r)
{
    if (l == r)
    {
        return;
    };
    int mid = (l + r) / 2;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    merge(l, mid, r);
};

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    };

    merge_sort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
