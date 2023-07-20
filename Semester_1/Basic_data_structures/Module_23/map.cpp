#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mp[val]++;
    }
    cout << mp[4] << endl;
    return 0;
}
