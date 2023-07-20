#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        set<int, greater<int>> st;
        int sz;
        cin >> sz;
        while (sz--)
        {
            int val;
            cin >> val;
            st.insert(val);
        }
        for (auto it = st.begin(); it != st.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
