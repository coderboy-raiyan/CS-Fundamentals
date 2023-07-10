#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<string> qu;
    while (n--)
    {
        int q;
        cin >> q;
        if (q == 0)
        {
            string ss;
            cin >> ss;
            qu.push(ss);
        }
        else if (qu.empty())
        {

            cout << "Invalid" << endl;
        }
        else if (q == 1)
        {
            cout << qu.front() << endl;
            qu.pop();
        }
    }

    return 0;
}
