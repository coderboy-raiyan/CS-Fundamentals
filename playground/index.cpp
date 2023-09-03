#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string phoneNum;
    cin >> phoneNum;
    string result;

    int grpSize = n % 2 == 0 ? 2 : 3;

    for (int i = 0; i < grpSize; i++)
    {
        result += phoneNum[i];
    };
    for (int i = grpSize; i < n; i += 2)
    {
        result += '-';
        result += phoneNum[i];
        if (i + 1 < n)
        {
            result += phoneNum[i + 1];
        }
    };
    for (char c : result)
    {
        cout << c;
    }

    return 0;
}
