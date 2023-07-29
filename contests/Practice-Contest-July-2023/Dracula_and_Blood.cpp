#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        stack<char> st;
        string line;
        cin >> line;
        int eatCnt = 0;
        st.push(line[0]);
        for (int i = 1; i < line.size(); i++)
        {
            if (!st.empty() && st.top() == '1')
            {
                eatCnt++;
                st.pop();
            }
            else
            {
                st.push(line[i]);
            }
        };
        cout << eatCnt << endl;
    }

    return 0;
}
