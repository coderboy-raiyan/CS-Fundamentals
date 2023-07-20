#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> pq;
    int n;
    cin >> n;
    while (n--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (c == 2)
        {
            pq.pop();
        }
        else if (c == 0)
        {
            cout << pq.top() << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}
