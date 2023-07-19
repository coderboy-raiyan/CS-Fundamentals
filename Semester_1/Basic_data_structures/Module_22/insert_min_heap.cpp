#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);

        int curr = v.size() - 1;

        while (curr != 0)
        {
            int parent = (curr - 1) / 2;
            if (v[parent] > v[curr])
            {
                swap(v[parent], v[curr]);
                curr = parent;
            }
            else
            {
                break;
            }
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}
