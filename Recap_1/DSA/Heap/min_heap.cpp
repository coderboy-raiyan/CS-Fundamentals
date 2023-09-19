#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int curr_idx = v.size() - 1;
        while (curr_idx != 0)
        {
            int parent_idx = (curr_idx - 1) / 2;
            if (v[parent_idx] < v[curr_idx])
            {
                swap(v[parent_idx], v[curr_idx]);
            }
            else
            {
                break;
            }
            curr_idx = parent_idx;
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}
