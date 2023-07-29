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
        map<int, int> mp;
        int dup = 0;
        while (n--)
        {
            int val;
            cin >> val;
            if (mp.count(val))
            {
                dup++;
            }
            else
            {
                mp[val]++;
            }
        }
        cout << dup << endl;
    }

    return 0;
}
