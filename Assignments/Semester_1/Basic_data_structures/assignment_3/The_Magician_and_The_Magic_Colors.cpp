#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string ss;
        cin >> ss;

        stack<char> st;

        for (char ch : ss)
        {
            if (!st.empty() && st.top() == ch)
            {
                st.pop();
            }
            else
            {
                if (!st.empty())
                {
                    if ((st.top() == 'R' && ch == 'B') || (st.top() == 'B' && ch == 'R'))
                    {
                        st.pop();
                        if (!st.empty() && st.top() == 'P')
                        {
                            st.pop();
                        }
                        else
                        {

                            st.push('P');
                        }
                    }
                    else if ((st.top() == 'R' && ch == 'G') || (st.top() == 'G' && ch == 'R'))
                    {
                        st.pop();
                        if (!st.empty() && st.top() == 'Y')
                        {
                            st.pop();
                        }
                        else
                        {

                            st.push('Y');
                        }
                    }
                    else if ((st.top() == 'B' && ch == 'G') || (st.top() == 'G' && ch == 'B'))
                    {
                        st.pop();
                        if (!st.empty() && st.top() == 'C')
                        {
                            st.pop();
                        }
                        else
                        {

                            st.push('C');
                        }
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
        }

        stack<char> newStack;
        while (!st.empty())
        {
            newStack.push(st.top());
            st.pop();
        }
        while (!newStack.empty())
        {
            cout << newStack.top();
            newStack.pop();
        }
        cout << endl;
    }

    return 0;
}
