#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> qu;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        st.push(num);
    }
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        qu.push(num);
    }

    if (st.size() != qu.size())
    {
        cout << "NO";
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != qu.front())
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        qu.pop();
    }

    cout << "YES";

    return 0;
}
