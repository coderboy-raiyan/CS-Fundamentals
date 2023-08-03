#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;
int nums[N];

void merge(int l, int mid, int r)
{
    int left_side = mid - l + 1;
    int left[left_side + 1];

    int right_side = r - mid;
    int right[right_side + 1];

    for (int i = l, j = 0; i <= mid; i++, j++)
    {
        left[j] = nums[i];
    }
    for (int i = mid + 1, j = 0; i <= r; i++, j++)
    {
        right[j] = nums[i];
    };
    left[left_side] = INT_MAX;
    right[right_side] = INT_MAX;
    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
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
    }
};

void merge_two(int l, int r)
{
    if (l == r)
    {
        return;
    };
    int mid = (l + r) / 2;
    merge_two(l, mid);
    merge_two(mid + 1, r);
    merge(l, mid, r);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    };
    merge_two(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
