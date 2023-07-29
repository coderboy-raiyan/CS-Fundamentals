#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> v;
        string line;
        cin >> line;
        int cnt = 0;
        for (int i = 0; i < line.size(); i++)
        {

            if (line[i] == '0' && cnt != 0)
            {

                v.push_back(cnt);
                cnt = 0;
            }
            if (line[i] == '1')
            {
                cnt++;
            }
        }

        v.push_back(cnt);
        sort(v.rbegin(), v.rend());
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans += v[i];
            }
        }

        cout << ans << endl;
        ans = 0;
    }

    return 0;
}
