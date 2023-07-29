#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;
    map<char, int> mp;
    int arr[26] = {0};
    while (getline(cin, line))
    {
        for (char i = 0; i < line.size(); i++)
        {
            arr[line[i]]++;
        }
        for (char i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
            {
                cout << i + 97;
            }
        }
    }

    return 0;
}
