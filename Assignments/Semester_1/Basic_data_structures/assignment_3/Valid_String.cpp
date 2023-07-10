#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        stack<char> st;
        string ss;
        cin >> ss;
        for (char ch : ss)
        {
            if (ch == 'A' && !st.empty())
            {
                if (st.top() == 'B')
                {
                    st.pop();
                }
                else
                {
                    st.push(ch);
                }
            }
            else if (ch == 'B' && !st.empty())
            {
                if (st.top() == 'A')
                {
                    st.pop();
                }
                else
                {
                    st.push(ch);
                }
            }
            else
            {
                st.push(ch);
            }
        }
        if (st.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
