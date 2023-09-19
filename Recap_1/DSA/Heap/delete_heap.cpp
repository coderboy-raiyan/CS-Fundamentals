#include <bits/stdc++.h>

using namespace std;

void insert_heap(vector<int> &v, int x)
{

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
};

void delete_from_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int curr = 0;
    while (true)
    {
        int leftIdx = (curr * 2) + 1;
        int rightIdx = (curr * 2) + 2;
        int lastIdx = v.size() - 1;
        if (leftIdx <= lastIdx && rightIdx <= lastIdx)
        {
            if (v[leftIdx] >= v[rightIdx] && v[leftIdx] > v[curr])
            {
                swap(v[curr], v[leftIdx]);
                curr = leftIdx;
            }
            else if (v[rightIdx] >= v[leftIdx] && v[rightIdx] > v[curr])
            {
                swap(v[curr], v[rightIdx]);
                curr = rightIdx;
            }
            else
            {
                break;
            }
        }
        else if (leftIdx <= lastIdx)
        {
            if (v[leftIdx] > v[curr])
            {
                swap(v[curr], v[leftIdx]);
                curr = leftIdx;
            }
            else
            {
                break;
            }
        }
        else if (rightIdx <= lastIdx)
        {
            if (v[rightIdx] > v[curr])
            {
                swap(v[curr], v[rightIdx]);
                curr = rightIdx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    while (n--)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    };
    delete_from_heap(v);
    for (auto val : v)
    {
        cout << val << " ";
    }

    return 0;
}
