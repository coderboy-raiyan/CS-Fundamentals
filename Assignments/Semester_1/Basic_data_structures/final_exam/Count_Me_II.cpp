#include <bits/stdc++.h>

using namespace std;

class MyNumber
{
public:
    int val;
    int count;

    MyNumber(int val, int count)
    {
        this->val = val;
        this->count = count;
    }
};

class cmp
{
public:
    bool operator()(MyNumber a, MyNumber b)
    {
        if (a.count < b.count)
        {
            return true;
        }
        else if (a.count > b.count)
        {
            return false;
        }
        else
        {
            if (a.val < b.val)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    };
};

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        map<int, int> mp;
        priority_queue<MyNumber, vector<MyNumber>, cmp> pq;
        int sz;
        cin >> sz;
        while (sz--)
        {
            int val;
            cin >> val;

            mp[val]++;
        };

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            pq.push(MyNumber(it->first, it->second));
        }

        cout << pq.top().val << " " << pq.top().count << endl;
    }

    return 0;
}
