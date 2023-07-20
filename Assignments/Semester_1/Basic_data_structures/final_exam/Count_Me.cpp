#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {

        string sh;
        getline(cin, sh);
        stringstream ss(sh);
        string word;
        map<string, int> mp;
        int mx = INT_MIN;
        string name;
        while (ss >> word)
        {
            mp[word]++;
            if (mp.count(word) && mp[word] > mx)
            {
                name = word;
                mx = max(mx, mp[word]);
            }
        }
        cout << name << " " << mx << endl;
        }

    return 0;
}
