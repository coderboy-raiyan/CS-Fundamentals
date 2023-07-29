#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "No";
    }
    else
    {
        if (a == b && b == c && a == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    return 0;
}
