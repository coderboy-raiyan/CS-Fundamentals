#include <bits/stdc++.h>

using namespace std;

class cmp
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, cmp> pq;
    while (n--)
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }
        else if (command == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            cout << "Empty" << endl;
        }
    }

    return 0;
}
