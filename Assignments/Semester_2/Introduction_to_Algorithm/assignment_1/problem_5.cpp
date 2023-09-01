#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    vector<int> newV;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v1.push_back(val);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        v2.push_back(val);
    }
    int lp = 0;
    int jp = 0;
    int k = 0;
    v1.push_back(INT_MIN);
    v2.push_back(INT_MIN);

    for (int i = 0; i < (n + m); i++)
    {
        if (v1[lp] >= v2[jp])
        {
            newV.push_back(v1[lp]);
            lp++;
        }
        else
        {
            newV.push_back(v2[jp]);
            jp++;
        }
        k++;
    }
    for (int val : newV)
    {
        cout << val << " ";
    }

    return 0;
}
